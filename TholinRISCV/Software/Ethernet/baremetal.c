#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

#include "io.h"
#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "arp.h"
#include "udp.h"
#include "dhcp.h"
#include "tholinstd.h"
#include "i2c.h"
#include "eeprom.h"
#include "rtc.h"
#include "sdcard.h"
#include "xorshift.h"
#include "ext4.h"
#include "delay.h"
#include "slaac.h"
#include "dns.h"
#include "ntp.h"
#include "tcp.h"
#include "int_stuff.h"

typedef uint32_t size_t;

#include "website_src/index_html.h"
#include "website_src/styles_css.h"
#include "website_src/ledge_webp.h"
#include "website_src/board_jpg.h"

int putchar(int c) {
	while((reg_stat & 2) != 0) {}
	reg_udr = c;
	return c;
}

#define UART_BUFF_LEN 64

volatile uint8_t uart_buff[UART_BUFF_LEN];
volatile uint32_t uart_rptr = 0;
volatile uint32_t uart_wptr = 0;
volatile uint32_t int_count = 0;

void isr() {
	rng_next();
	if(reg_inum == 2) {
		reg_tmr1 = 0;
		reg_intclr = 0;
		if((int_count & 7) == 0) reg_porta = reg_porta ^ 0b100000;
		int_count++;
		if((int_count & 31) == 0 && dhcp_lease_time != 0) dhcp_lease_time--;
		if((int_count & 31) == 0 && slaac_lifetime != 0 && slaac_lifetime != 0xFFFFFFFF) slaac_lifetime--;
		eth_update();
		return;
	}
	if(reg_inum == 3) {
		//UART interrupt
		uint8_t rec_val = reg_udr;
		reg_stat = 0; //to clear UHB
		uart_buff[uart_wptr++] = rec_val;
		if(uart_wptr >= UART_BUFF_LEN) uart_wptr = 0;
		return;
	}
}

void delay_s(uint32_t seconds) {
	seconds *= 32;
	uint32_t int_count_orig = int_count;
	while(int_count - int_count_orig < seconds) { asm volatile("nop"); }
}

uint16_t uart_next() {
	if(uart_rptr == uart_wptr) return 0xFFFF;
	uint8_t res = uart_buff[uart_rptr++];
	if(uart_rptr >= UART_BUFF_LEN) uart_rptr = 0;
	return res;
}

uint8_t wait_for_char(uint8_t echo) {
	uint16_t ret;
	while(1) {
		ret = uart_next();
		if(ret != 0xFFFF) {
			if(echo) putchar(ret);
			return ret;
		}
	}
}

void error_out() {
	reg_porta = reg_porta | 0b100000;
	while(1);
}

uint8_t starts_with(const char* in1, const char* in2) {
	while(*in2) {
		if(*in1 != *in2) return 0;
		in1++;
		in2++;
	}
	return 1;
}

uint8_t strs_equal(const char* in1, const char* in2) {
	while(1) {
		if(*in1 != *in2) return 0;
		if(*in1 == 0) return 1;
		in1++;
		in2++;
	}
}

#define F_CLK 15000000

void main(void) {
	reg_udiv  = F_CLK / 38400 + 1;
	reg_ddra  = 0b110001;
	reg_porta = 0b010001;
	i2c_setup();
	
	reg_tdiv0 = F_CLK/10000;
	reg_ttop0 = 0xFFFFFFFF;
	reg_tmr0 = 0;
	
	reg_tdiv1 = F_CLK/4000;
	reg_ttop1 = 125;
	reg_tmr1 = 0;
	reg_ien = 0b110;
	
	uint32_t a = reg_chirp1;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	putchar((a >> 16) & 0xFF);
	putchar((a >> 24) & 0xFF);
	a = reg_chirp2;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	puts("\r\n");
	
	{
		uint8_t sd_ret = sd_init();
		if(sd_ret) while(1);
		
		uint8_t mbr_buff[512];
		sd_read_block(0, mbr_buff);
		if(mbr_buff[510] != 0x55 || mbr_buff[511] != 0xAA) {
			puts("Invalid MBR!\r\n");
			error_out();
		}
		uint32_t ext4_start = 0xFFFFFFFF;
		uint8_t* temp;
		for(uint8_t i = 0; i < 4; i++) {
			temp = mbr_buff + (446 + i * 16 + 8);
			uint32_t start = temp[0] + (temp[1] << 8) + (temp[2] << 16) + (temp[3] << 24);
			temp = mbr_buff + (446 + i * 16 + 12);
			uint32_t size = temp[0] + (temp[1] << 8) + (temp[2] << 16) + (temp[3] << 24);
			uint32_t end = start + size;
			uint8_t type = mbr_buff[446 + i * 16 + 4];
			if(start > sd_num_blocks || end > sd_num_blocks) {
				puts("\033[1;31mWARNING:\033[0m Invalid partition found on card, MBR may be bad\r\n");
				size = start = end = 0;
				type = 0;
			}
			if(size != 0 && type == 0x83) {
				ext4_start = start;
				break;
			}
		}
		if(ext4_start == 0xFFFFFFFF) {
			puts("No partition of type ext4 found on card\r\n");
			error_out();
		}
		
		int e4ret = ext4_mount(ext4_start);
		if(e4ret != EXT4_OKAY) {
			printf("Failed to mount ext4 partition %x\r\n", e4ret);
			error_out();
		}
		
		puts("eth_reset\r\n");
		eth_reset();
		dns_ip.ipv4 = (1 << 24) | (1 << 16) | (1 << 8) | 1;
		dns_ip.def_ipv4 = 1;
	}
	
	puts("Enabling interrupts now!\r\n");
	asm volatile(".word 0x00700073"); //sei
	
	const char* hostname = "Tholin RISC-V";
	dhcp(ipv4_parts(192, 168, 2, 1), hostname);
	slaac_configure(1, hostname);
	if(dns_ip.def_ipv6) dns_ip.type = 1; //Prefer IPv6
	IPAddr test_ip = ipv4_parts(192, 168, 2, 40);
	arp_request(test_ip);
	
	puts("Switching DNS to 'one.one.one.one' => ");
	IPAddr res;
	uint8_t retval = dns_query("one.one.one.one", &res, 1);
	if(retval == 0) {
		debug_print_IP(res);
		putchar(13); putchar(10);
		for(uint8_t i = 0; i < 16; i++) dns_ip.ipv6[i] = res.ipv6[i];
	}else printf("FAIL %x\r\n", retval);
	
	puts("Getting NTP IP from '0.de.pool.ntp.org' => ");
	for(uint8_t i = 0; i < 3; i++) {
		retval = dns_query("0.de.pool.ntp.org", &res, 0);
		if(retval == 0) break;
	}
	if(retval == 0) {
		debug_print_IP(res);
		putchar(13); putchar(10);
	}else {
		printf("FAIL (fallback used) %x\r\n", retval);
		res = ipv4_parts(88, 198, 200, 96);
	}
	retval = ntp_query(res, 3600);
	if(retval) {
		printf("NTP FAIL (%x) using time from RTC which is ", retval);
		struct Datetime datetime;
		retval = rtc_get_time(&datetime);
		if(retval) {
			puts("UNKNOWN\r\n");
		}else {
			rtc_time_print(&datetime);
			putchar(13); putchar(10);
		}
	}
	
	{
	volatile TCPSocket* client;
	uint32_t int_count_orig;
	char request_buffer[4096];
	char itoa_buffer[128];
	uint16_t request_buffer_pos;
	struct Datetime time;
	const char* get_start = "GET /";
	const char* get_end = " HTTP/1.";
	const char* http_404_header = "HTTP/1.1 404 Not Found\r\nServer: Tholin's RISC-V\r\nContent-Type: text/html\r\nConnection: close\r\nContent-Length: ";
	const char* http_404_content = "\r\n\r\n<!DOCTYPE html><html><head><meta content='text/html; charset=UTF-8' http-equiv='Content-Type'><title>404 Not Found</title></head><body><center><h1>404 Not Found</h1></center><hr><center>Tholin's RISC-V</center></body></html><!-- WEH! -->\r\n\r\n";
	const char* http_200_header = "HTTP/1.1 200 OK\r\nServer: Tholin's RISC-V\r\nConnection: close\r\n";
	const char* content_type_html = "Content-Type: text/html\r\nContent-Length: ";
	const char* content_type_css = "Content-Type: text/css\r\nContent-Length: ";
	const char* content_type_webp = "Content-Type: image/webp\r\nContent-Length: ";
	const char* content_type_jpg = "Content-Type: image/jpeg\r\nContent-Length: ";
	const char* date_str = "\r\nDate: ";
	printf("HTTP Server is now up on port 8088\r\n");
	while(1) {
		if(tcp_num_incoming() == 0) continue;
		if(tcp_accept(&client)) continue;
		while(client->state == 5) {asm volatile("nop");}
		if(client->state == 0) continue;
		//printf("Incoming connection\r\n");
		request_buffer_pos = 0;
		for(uint16_t i = 0; i < 4096; i++) request_buffer[i] = 0;
		uint8_t request_done = 0;
		uint8_t timeout = 0;
		while(!request_done) {
			if(request_buffer_pos >= 4096) {
				//printf("HTTP: Request too long!\r\n");
				tcp_close(client);
				timeout = 1;
				break;
			}
			int_count_orig = int_count;
			while(client->remaining == 0 && client->state == 4) if(int_count - int_count_orig > 32) {
				//printf("HTTP: Request timeout!\r\n");
				timeout = 1;
				break;
			}
			if(timeout) {
				if(client->state == 4) tcp_close(client);
				break;
			}
			if(client->state != 4) {
				//printf("HTTP: Connection lost\r\n");
				timeout = 1;
				break;
			}
			uint16_t res = tcp_read(client, (uint8_t *)request_buffer + request_buffer_pos, 4096 - request_buffer_pos);
			for(uint16_t i = request_buffer_pos < 4 ? 3 : request_buffer_pos - 4; i < request_buffer_pos + res; i++) {
				if(request_buffer[i - 3] == '\r' && request_buffer[i - 2] == '\n' && request_buffer[i - 1] == '\r' && request_buffer[i] == '\n') {
					request_done = 1;
					break;
				}
			}
			request_buffer_pos += res;
		}
		if(timeout) continue;
		if(client->state != 4) continue;
		char* temp = request_buffer;
		while(*temp && *temp != '\r') {
			putchar(*temp);
			temp++;
		}
		putchar(13); putchar(10);
		
		if(!starts_with(request_buffer, get_start)) goto response_404;
		char* request_path_start = request_buffer + 4;
		temp = request_path_start;
		uint16_t request_path_len = 0;
		while(1) {
			if(*temp == '\r' || *temp == '\n' || *temp == '\t' || *temp == 0) {
				timeout = 1;
				break;
			}
			if(*temp == ' ') break;
			temp++;
			request_path_len++;
		}
		if(timeout || request_path_len == 0) goto response_404;
		if(request_path_start[request_path_len - 1] == '/' && request_path_len > 1) goto response_404;
		if(request_path_start[0] != '/') goto response_404;
		if(!starts_with(temp, get_end)) goto response_404;
		//Could be 1.0 or 1.1
		if((temp[8] != '0' && temp[8] != '1') || temp[9] != '\r' || temp[10] != '\n') goto response_404;
		request_path_start[request_path_len] = 0;
		
		const char* content_ptr = 0;
		uint32_t content_len = 0;
		const char* content_type_str = 0;
		if(request_path_len == 1 && request_path_start[0] == '/') {
			content_ptr = index_html;
			content_len = index_html_SIZE;
			content_type_str = content_type_html;
		}else if(strs_equal(request_path_start + 1, index_html_NAME)) {
			content_ptr = index_html;
			content_len = index_html_SIZE;
			content_type_str = content_type_html;
		}else if(strs_equal(request_path_start + 1, styles_css_NAME)) {
			content_ptr = styles_css;
			content_len = styles_css_SIZE;
			content_type_str = content_type_css;
		}else if(strs_equal(request_path_start + 1, ledge_webp_NAME)) {
			content_ptr = ledge_webp;
			content_len = ledge_webp_SIZE;
			content_type_str = content_type_webp;
		}else if(strs_equal(request_path_start + 1, board_jpg_NAME)) {
			content_ptr = board_jpg;
			content_len = board_jpg_SIZE;
			content_type_str = content_type_jpg;
		}
		if(content_ptr == 0) goto response_404;
		
		printf("HTTP: 200\r\n");
		itoa(content_len, itoa_buffer);
		tcp_write(client, (uint8_t *)http_200_header, strlen(http_200_header));
		tcp_write(client, (uint8_t *)content_type_str, strlen(content_type_str));
		
		char* num_end = itoa_buffer;
		while(*num_end) num_end++;
		if(!rtc_get_time(&time)) {
			strcpy(num_end, date_str);
			num_end += strlen(date_str);
			rtc_time_str(&time, num_end);
			while(*num_end) num_end++;
		}
		num_end[0] = '\r';
		num_end[1] = '\n';
		num_end[2] = '\r';
		num_end[3] = '\n';
		num_end[4] = 0;
		tcp_write(client, (uint8_t *)itoa_buffer, strlen(itoa_buffer));
		tcp_write(client, (uint8_t *)content_ptr, content_len);
		goto close_and_continue;
response_404:
		printf("HTTP: 404\r\n");
		itoa(strlen(http_404_content) - 4, itoa_buffer);
		tcp_write(client, (uint8_t *)http_404_header, strlen(http_404_header));
		tcp_write(client, (uint8_t *)itoa_buffer, strlen(itoa_buffer));
		strcpy(itoa_buffer, "\r\nDate: ");
		if(!rtc_get_time(&time)) rtc_time_str(&time, itoa_buffer + 8);
		tcp_write(client, (uint8_t *)itoa_buffer, strlen(itoa_buffer));
		tcp_write(client, (uint8_t *)http_404_content, strlen(http_404_content));
close_and_continue:
		client->timeout = 16;
		continue;
	}
	}
	/*volatile TCPSocket* socket;
	tcp_connect(test_ip, 8008, &socket);
	while(socket->state == 1) {}
	if(socket->state == 4) {
		tcp_write(socket, "awawawawa", 10);
	}
	
	uint8_t retbuff[32];
	uint8_t counter = 0;
	const char* hexchars_a = "0123456789abcdef";
	while(1) {
		if(socket->remaining > 0) {
			for(uint8_t i = 0; i < 32; i++) retbuff[i] = 0;
			tcp_read(socket, retbuff, 32);
			printf("Received: %s\r\n", retbuff);
			if(socket->state == 4) {
				tcp_write(socket, "WEHWEHWEHWEHWEH!", 16);
				retbuff[0] = hexchars_a[counter >> 4];
				retbuff[1] = hexchars_a[counter & 15];
				retbuff[2] = 0;
				tcp_write(socket, retbuff, 3);
			}else printf("Connection closed!\r\n");
			counter++;
		}
		delay_s(1);
	}*/
}
