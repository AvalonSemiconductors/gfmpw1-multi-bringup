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
	
	puts("Switching DNS to 'one.one.one.one' => ");
	IPAddr res;
	uint8_t retval = dns_query("one.one.one.one", &res, 1);
	if(retval == 0) {
		debug_print_IP(res);
		putchar(13); putchar(10);
		for(uint8_t i = 0; i < 16; i++) dns_ip.ipv6[i] = res.ipv6[i];
	}else printf("FAIL %x\r\n", retval);
	
	puts("Getting NTP IP from '0.de.pool.ntp.org' => ");
	retval = dns_query("0.de.pool.ntp.org", &res, 0);
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
	
	while(1) {
		delay_s(2);
	}
}
