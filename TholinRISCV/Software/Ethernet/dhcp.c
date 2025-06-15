#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "udp.h"
#include "ip.h"
#include "arp.h"
#include "dhcp.h"
#include "tholinstd.h"
#include "delay.h"

#define DHCP_TYPE_DISCOVER 1
#define DHCP_TYPE_REQUEST 3
#define DHCP_TYPE_DECLINE 4

volatile uint32_t dhcp_lease_time = 0;

uint8_t dhcp_header_correct(uint8_t* buff) {
	return buff[4] == 0x39 && buff[5] == 0x03 && buff[6] == 0xF3 && buff[7] == 0x26 && buff[236] == 0x63 && buff[237] == 0x82 && buff[238] == 0x53 && buff[239] == 0x63;
}

uint16_t dhcp_put_header(uint8_t* buff, uint8_t msg_type, uint32_t server_ip, const char* hostname) {
	buff[0] = 0x01; //OP
	buff[1] = 0x01; //HTYPE
	buff[2] = 0x06; //HLEN
	buff[3] = 0x00; //HOPS
	buff[4] = 0x39; buff[5] = 0x03; buff[6] = 0xF3; buff[7] = 0x26; //XID
	buff[8] = 0x00; buff[9] = 0x00; //SECS
	buff[10] = 0x00; buff[11] = 0x00; //FLAGS
	for(int i = 0; i < 4; i++) {
		buff[12 + i] = 0; //CIADDR
		buff[16 + i] = 0; //YIADDR
		buff[20 + i] = 0; //SIADDR
		buff[24 + i] = 0; //GIADDR
	}
	buff[34] = buff[35] = 0x00;
	for(int i = 0; i < 200; i++) {
		buff[36 + i] = 0x00; //BOOTP
	}
	for(int i = 0; i < MAC_LENGTH; i++) {
		buff[28 + i] = our_mac[i];
	}
	buff[236] = 0x63; buff[237] = 0x82; buff[238] = 0x53; buff[239] = 0x63; //MAGIC
	
	uint8_t* options_ptr = buff + 240;
	
	options_ptr[0] = 53;
	options_ptr[1] = 1;
	options_ptr[2] = msg_type;
	options_ptr += 3;
	
	options_ptr[0] = 54;
	options_ptr[1] = 4;
	put_uint32(options_ptr + 2, server_ip);
	options_ptr += 6;
	
	uint32_t len = 0;
	if(hostname) while(1) if(hostname[len++] == 0) break;
	if(len > 200) len = 200;
	if(len) {
		options_ptr[0] = 12;
		options_ptr[1] = (uint8_t)len;
		options_ptr += 2;
		for(uint8_t i = 0; i < len; i++) *options_ptr++ = (uint8_t)(*hostname++);
	}
	
	*options_ptr++ = 0xFF;
	
	return options_ptr - buff;
}

uint8_t dhcp(IPAddr s_ip, const char* hostname) {
	if(s_ip.type) return 2;
	uint8_t retcode = 0;
	our_ip.def_ipv4 = 0;
	router_ip.def_ipv4 = 0;
	arp_request(s_ip);
	delay_s(1);
	printf("DHCP");
	udp_open_port(68);
	
	uint8_t dhcp_buff[512];
	uint16_t hlen = dhcp_put_header(dhcp_buff, DHCP_TYPE_DISCOVER, s_ip.ipv4, hostname);
	udp_skip(68, 0xFFFF);
	udp_write(67, s_ip, dhcp_buff, hlen);
	putchar('.');
	
	uint8_t wait;
	for(wait = 0; wait < 10; wait++) {
		delay_s(1);
		if(udp_available(68) >= 240) break;
	}
	if(wait == 10) goto dhcp_fail;
	
	uint16_t read = udp_read(68, dhcp_buff, 512);
	if(!dhcp_header_correct(dhcp_buff) || dhcp_buff[0] != 0x02) goto dhcp_fail;
	if(dhcp_buff[16] == 0 && dhcp_buff[17] == 0 && dhcp_buff[18] == 0 && dhcp_buff[19] == 0) goto dhcp_fail;
	putchar('.');
	uint32_t siaddr = EXTRACT_UINT32(dhcp_buff + 20);
	
	//If there is a server IP in the options, use that instead
	uint16_t opt_pos = 240;
	while(opt_pos < read) {
		uint8_t cmd = dhcp_buff[opt_pos++];
		uint8_t len = dhcp_buff[opt_pos++];
		if(cmd == 54) {
			//Server IP overriden using option
			siaddr = EXTRACT_UINT32(dhcp_buff + opt_pos);
		}
		opt_pos += len;
	}
	
	if(siaddr != s_ip.ipv4) {
		//debug_print_IPv4(EXTRACT_UINT32(dhcp_buff + 16)); putchar(' ');
		//debug_print_IPv4(EXTRACT_UINT32(dhcp_buff + 20)); putchar(' ');
		putchar('C');
		goto dhcp_fail;
	}
	hlen = dhcp_put_header(dhcp_buff, DHCP_TYPE_REQUEST, s_ip.ipv4, hostname);
	put_uint32(dhcp_buff + 20, siaddr);
	udp_skip(68, 0xFFFF);
	udp_write(67, s_ip, dhcp_buff, hlen);
	
	for(wait = 0; wait < 10; wait++) {
		delay_s(1);
		if(udp_available(68) >= 240) break;
	}
	if(wait == 10) goto dhcp_fail;
	
	read = udp_read(68, dhcp_buff, 512);
	if(!dhcp_header_correct(dhcp_buff) || dhcp_buff[0] != 0x02) goto dhcp_fail;
	putchar('.');
	uint32_t yiaddr = EXTRACT_UINT32(dhcp_buff + 16);
	our_ip.ipv4 = yiaddr;
	our_ip.def_ipv4 = 1;
	putchar(' ');
	debug_print_IPv4(our_ip.ipv4);
	
	//Find lease time
	router_ip.ipv4 = s_ip.ipv4;
	router_ip.def_ipv4 = 1;
	opt_pos = 240;
	dhcp_lease_time = 0xFFFFFFFF;
	while(opt_pos < read) {
		uint8_t cmd = dhcp_buff[opt_pos++];
		uint8_t len = dhcp_buff[opt_pos++];
		if(cmd == 51) dhcp_lease_time = EXTRACT_UINT32(dhcp_buff + opt_pos);
		if(cmd == 3) router_ip.ipv4 = EXTRACT_UINT32(dhcp_buff + opt_pos);
		opt_pos += len;
	}
	
	arp_request(router_ip);
	
	goto dhcp_final;
dhcp_fail:
	putchar('F');
	retcode = 1;
dhcp_final:
	putchar(13);
	putchar(10);
	udp_close_port(68);
	return retcode;
}
