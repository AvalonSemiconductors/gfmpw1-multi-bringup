#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "arp.h"
#include "udp.h"
#include "slaac.h"
#include "xorshift.h"
#include "tholinstd.h"
#include "delay.h"

volatile uint8_t slaac_prefix_len = 0xFE;
volatile uint32_t slaac_lifetime;
volatile uint8_t slaac_prefix[16];

uint8_t slaac_configure(uint8_t do_dns, const char* hostname) {
	printf("SLAAC");
	our_global_ipv6.def_ipv6 = our_global_ipv6.def_ipv4 = 0;
	our_ip.ipv6[0] = 0xFE;
	our_ip.ipv6[1] = 0x80;
	our_ip.ipv6[2] = 0x00;
	our_ip.ipv6[3] = 0x00;
	our_ip.ipv6[4] = 0x00;
	our_ip.ipv6[5] = 0x00;
	our_ip.ipv6[6] = 0x00;
	our_ip.ipv6[7] = 0x00;
	our_ip.ipv6[8] = our_mac[0] ^ 0x40;
	our_ip.ipv6[9] = our_mac[1];
	our_ip.ipv6[10] = our_mac[2];
	our_ip.ipv6[11] = 0xFF;
	our_ip.ipv6[12] = 0xFE;
	our_ip.ipv6[13] = our_mac[3];
	our_ip.ipv6[14] = our_mac[4];
	our_ip.ipv6[15] = our_mac[5];
	our_ip.def_ipv6 = 1;
	
	arp_table_remove(our_ip);
	IPAddr lookup_ip = our_ip;
	lookup_ip.type = 1;
	lookup_ip.def_ipv4 = 0;
	putchar('.');
	for(uint8_t tries = 0; tries < 2; tries++) {
		ndp_solicit(our_ip);
		delay_s(2);
		uint8_t* mac = arp_lookup(lookup_ip);
		if(mac != 0 && (mac[0] != 0x33 || mac[1] != 0x33)) {
			printf(" Failed: link-local address taken\r\n");
			our_ip.def_ipv6 = 0;
			return 1;
		}
	}
	
	router_ip.def_ipv6 = 0;
	slaac_prefix_len = 0xFF;
	slaac_lifetime = 0xFFFFFFFF;
	uint8_t tries = 0;
	putchar('.');
	while(slaac_prefix_len == 0xFF) {
		tries++;
		icmpv6_router_solicitation();
		delay_s(2);
		if(tries == 4 && slaac_prefix_len == 0xFF) {
			printf(" Failed: no router responded on network (but link-local address has been configured)\r\n");
			return 2;
		}
	}
	
	if(slaac_prefix_len != 64) {
		printf(" Failed: unsupported prefix length %u\r\n", slaac_prefix_len);
		return 3;
	}
	
	for(uint8_t i = 0; i < 8; i++) our_global_ipv6.ipv6[i] = slaac_prefix[i];
	for(uint8_t i = 8; i < 16; i++) our_global_ipv6.ipv6[i] = our_ip.ipv6[i];
	our_global_ipv6.def_ipv6 = 1;
	our_global_ipv6.type = 1;
	
	putchar('.');
	arp_table_remove(our_global_ipv6);
	for(uint8_t tries = 0; tries < 2; tries++) {
		ndp_solicit(our_global_ipv6);
		delay_s(2);
		uint8_t* mac = arp_lookup(our_global_ipv6);
		if(mac != 0 && (mac[0] != 0x33 || mac[1] != 0x33)) {
			printf(" Failed: global unicast address taken (but link-local address has been configured)\r\n");
			our_global_ipv6.def_ipv6 = 0;
			return 4;
		}
	}
	router_ip.def_ipv6 = 1;
	printf(" Link-local: ");
	debug_print_IPv6(our_ip);
	printf(" Unicast/inet: ");
	debug_print_IP(our_global_ipv6);
	putchar(13); putchar(10);
	
	//Try to get DNS information
	uint8_t buff[512];
	buff[0] = 11;
	buff[1] = rng_next();
	buff[2] = rng_next();
	buff[3] = rng_next();
	
	put_uint16(buff + 4, 8); //Elapsed time option
	put_uint16(buff + 6, 2);
	put_uint16(buff + 8, 0);
	
	put_uint16(buff + 10, 6); //Option request option
	put_uint16(buff + 12, 2 * 3);
	put_uint16(buff + 14, 83); //INF_MAX_RT
	put_uint16(buff + 16, 32); //INFORMATION_REFRESH_TIME
	put_uint16(buff + 18, 23); //DNS_SERVERS
	
	put_uint16(buff + 20, 1); //Client ID option
	put_uint16(buff + 22, 18);
	put_uint16(buff + 24, 4);
	
	uint16_t lfsr = 0x89AC;
	uint16_t bit;
	for(uint8_t i = 0; i < 16; i++) {
		bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5)) & 1u;
		lfsr = (lfsr >> 1) | (bit << 15);
		buff[26 + i] = lfsr >> 3;
	}
	
	IPAddr dhcp_ip = get_broadcast_addr(1);
	dhcp_ip.ipv6[0] = 0xFF;
	dhcp_ip.ipv6[1] = 0x02;
	dhcp_ip.ipv6[15] = 0x02;
	dhcp_ip.ipv6[13] = 0x01;
	
	udp_open_port(546);
	udp_skip(546, 0xFFFF);
	udp_write(547, dhcp_ip, buff, 24 + 18);
	
	uint8_t wait;
	for(wait = 0; wait < 6; wait++) {
		delay_s(1);
		if(udp_available(546) >= 4) break;
	}
	if(wait == 6) {
		udp_close_port(546);
		goto dhcpv6_fail;
	}
	
	uint16_t read = udp_read(546, buff, 512);
	udp_close_port(546);
	
	if(buff[0] != 7) goto dhcpv6_fail;
	uint8_t* options_base = buff + 4;
	dns_ip.def_ipv6 = 0;
	while(read) {
		uint16_t type = EXTRACT_UINT16(options_base);
		options_base += 2;
		uint16_t len = EXTRACT_UINT16(options_base);
		options_base += 2;
		switch(type) {
			case 83:
				//INF_MAX_RT
				break;
			case 32:
				//INFORMATION_REFRESH_TIME
				break;
			case 23:
				//DNS_SERVERS
				if(len >= 16) {
					//Just accept the first one
					for(uint8_t i = 0; i < 16; i++) dns_ip.ipv6[i] = *options_base++;
					dns_ip.def_ipv6 = 1;
				}
				break;
		}
		options_base += len;
		read -= 4 + len;
	}
	if(dns_ip.def_ipv6 == 0) goto dhcpv6_fail;
	
	printf("SLAAC DHCPv6 info query success, DNS server at ");
	debug_print_IPv6(dns_ip);
	putchar(13); putchar(10);
	
	ndp_solicit(router_ip);
	if(is_local_addr(dns_ip) && !compare_ips(router_ip, dns_ip)) ndp_solicit(dns_ip);
	
	return 0;
dhcpv6_fail:
	printf("SLAAC could not use DHCPv6 to get DNS information. You may need to set a DNS IP manually.\r\n");
	return 5;
}

uint8_t slaac_handle_router_advertisement(IPv6Header hdr) {
	if(slaac_prefix_len != 0xFF) return 1; //Not in SLAAC configuration right now
	uint8_t* opt_base = hdr.payload + 12;
	uint16_t position = 12;
	while(position < hdr.len - 2) {
		uint16_t len = opt_base[1] << 3;
		if(opt_base[0] == 3 && len == 32) {
			//Prefix information
			//TODO: possibly reject link based on flags
			//uint8_t flags = opt_base[3] & 0xE0;
			slaac_prefix_len = opt_base[2];
			slaac_lifetime = EXTRACT_UINT32(opt_base + 8);
			for(uint8_t i = 0; i < 16; i++) {
				slaac_prefix[i] = opt_base[i + 16];
			}
		}
		opt_base += len;
		position += len;
	}
	
	for(uint8_t i = 0; i < 16; i++) router_ip.ipv6[i] = hdr.source_ip.ipv6[i];
	return 0;
}
