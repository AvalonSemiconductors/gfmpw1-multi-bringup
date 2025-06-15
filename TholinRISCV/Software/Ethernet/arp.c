#include <stdint.h>

#ifdef DEBUG_ARP
#include "tholinstd.h"
#endif
#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "arp.h"
#include "xorshift.h"

#define ARP_TABLE_SIZE 64

static ArpEntry arp_table[ARP_TABLE_SIZE] __attribute__ ((aligned (4)));

#ifdef DEBUG_ARP
void print_arp_header(ArpHeader *hdr) {
	puts("---- ARP ----\r\n");
	printf("H-Type: %x\r\n", hdr->htype);
	printf("P-Type: %x\r\n", hdr->ptype);
	printf("H-Length: %u\r\n", hdr->hlen);
	printf("P-Length: %u\r\n", hdr->plen);
	puts("Operation: ");
	if(hdr->oper == 1) puts("REQUEST\r\n");
	else if(hdr->oper == 2) puts("REPLY\r\n");
	else puts("UNKNOWN\r\n");
	puts("Sender MAC: "); debug_print_MAC(hdr->sha); puts("\r\n");
	puts("Sender IPv4: "); debug_print_IPv4(hdr->spa); puts("\r\n");
	puts("Target MAC: "); debug_print_MAC(hdr->tha); puts("\r\n");
	puts("Target IPv4: "); debug_print_IPv4(hdr->tpa); puts("\r\n");
	puts("-------------\r\n\r\n");
}
#endif

void arp_reset(void) {
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		arp_table[i].ip.def_ipv4 = 0;
		arp_table[i].ip.def_ipv6 = 0;
		arp_table[i].padding = 0x0621;
	}
}

void arp_handle_request(ArpHeader* hdr) {
	if(our_ip.def_ipv4 == 0 || hdr->tpa != our_ip.ipv4) return;
	//Its for us! Must reply!
	uint8_t *p = eth_tx_header(hdr->sha, ETHERNET_TYPE_ARP);
	uint8_t *orig = p;
	put_uint16(p, 1);
	p += 2;
	put_uint16(p, 0x0800);
	p += 2;
	*p = 6;
	p++;
	*p = 4;
	p++;
	put_uint16(p, 2);
	p += 2;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = our_mac[i];
	p += MAC_LENGTH;
	put_uint32(p, our_ip.ipv4);
	p += 4;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = hdr->sha[i];
	p += MAC_LENGTH;
	put_uint32(p, hdr->spa);
	p += 4;
	//print_arp_header((ArpHeader*)(orig));
	eth_tx(p - orig);
	arp_table_add(hdr->sha, ipv4(hdr->spa));
#ifdef DEBUG_ARP
	puts("Replying to ARP request now\r\n");
#endif
}

void arp_handle_reply(ArpHeader* hdr) {
	//Cache in table
	arp_table_add(hdr->sha, ipv4(hdr->spa));
}

void arp_parse_incoming(EthernetFrame* raw) {
	ArpHeader hdr;
	uint8_t* p = raw->payload;
	hdr.htype = EXTRACT_UINT16(p);
	p += 2;
	hdr.ptype = EXTRACT_UINT16(p);
	p += 2;
	hdr.hlen = *p;
	hdr.plen = *(p+1);
	p += 2;
	hdr.oper = EXTRACT_UINT16(p);
	p += 2;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) hdr.sha[i] = p[i];
	p += MAC_LENGTH;
	hdr.spa = EXTRACT_UINT32(p);
	p += 4;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) hdr.tha[i] = p[i];
	p += MAC_LENGTH;
	hdr.tpa = EXTRACT_UINT32(p);
	p += 4;

#ifdef DEBUG_ARP
	print_arp_header(&hdr);
#endif
	if(hdr.htype != 1) return; //Invalid type, must be Ethernet
	if(hdr.ptype != 0x0800) return; //Invalid  type, must be IPv4
	if(hdr.hlen != 6) return; //Must be a 6-byte MAC Address
	if(hdr.plen != 4) return; //Must be a 4-byte IPv4 Address
	if(hdr.oper == 1) {
		arp_handle_request(&hdr);
	}else if(hdr.oper == 2) {
		arp_handle_reply(&hdr);
	}
}

void ndp_solicit(IPAddr ip) {
	IPAddr dest = get_ndp_ip_base();
	dest.ipv6[13] = ip.ipv6[13];
	dest.ipv6[14] = ip.ipv6[14];
	dest.ipv6[15] = ip.ipv6[15];
	uint8_t* p = icmpv6_tx_header(28, 135, 0, dest);
	p[0] = p[1] = p[2] = p[3] = 0x00;
	put_ipv6(p + 4, ip);
	//Put our MAC in there as well
	p[20] = p[21] = 1;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) {
		p[22 + i] = our_mac[i];
	}
	icmpv6_checksum(p, 28);
	ipv6_tx(32);
}

void arp_parse_ndp(ICMPHeader ihdr, IPv6Header hdr) {
	uint8_t* payload = hdr.payload;
	if(ihdr.type == 135) {
		//Neighbor solicitation
		if(our_ip.def_ipv6 == 0 && our_global_ipv6.def_ipv6 == 0) return;
		uint8_t ip_match = hdr.dest_ip.ipv6[11] == 0x01;
		ip_match = ip_match && hdr.dest_ip.ipv6[12] == 0xff;
		uint8_t ll_match = our_ip.def_ipv6 && hdr.dest_ip.ipv6[13] == our_ip.ipv6[13] && hdr.dest_ip.ipv6[14] == our_ip.ipv6[14] && hdr.dest_ip.ipv6[15] == our_ip.ipv6[15];
		uint8_t gip_match = our_global_ipv6.def_ipv6 && hdr.dest_ip.ipv6[13] == our_global_ipv6.ipv6[13] && hdr.dest_ip.ipv6[14] == our_global_ipv6.ipv6[14] && hdr.dest_ip.ipv6[15] == our_global_ipv6.ipv6[15];
		ip_match = ip_match && (ll_match || gip_match);
		if(!ip_match) return;
		
		uint8_t matches = 1;
		uint8_t matches_gip = 1;
		if(matches) for(uint8_t i = 0; i < 16 && (matches || matches_gip); i++) {
			if(payload[4 + i] != our_ip.ipv6[i]) matches = 0;
			if(payload[4 + i] != our_global_ipv6.ipv6[i]) matches_gip = 0;
		}
		if(!matches && !matches_gip) return;
		uint8_t* opt_base = payload + 20;
		uint16_t position = 20;
		while(position < hdr.len - 2) {
			uint16_t len = opt_base[1] << 3;
			if(opt_base[0] == 1 && len == 8) arp_table_add(opt_base + 2, hdr.source_ip);
			opt_base += len;
			position += len;
		}
		//Respond with neighbor advertisement
		uint8_t* p = icmpv6_tx_header(28, 136, 0, hdr.source_ip);
		p[0] = 0x60; //Flags: sol, ovr
		p[1] = 0x00;
		p[2] = 0x00;
		p[3] = 0x00;
		put_ipv6(p + 4, matches_gip ? our_global_ipv6 : our_ip);
		p[20] = 2;
		p[21] = 1;
		for(uint8_t i = 0; i < MAC_LENGTH; i++) {
			p[22 + i] = our_mac[i];
		}
		icmpv6_checksum(p, 28);
		ipv6_tx(32);
	}else if(ihdr.type == 136) {
		//Neighbor advertisement
		if((payload[0] & 0x40) == 0) return; //Only respond to advertisements we solicited
		uint8_t* opt_base = payload + 20;
		uint16_t position = 20;
		while(position < hdr.len - 2) {
			uint16_t len = opt_base[1] << 3;
			if(opt_base[0] == 2 && len == 8) arp_table_add(opt_base + 2, hdr.source_ip);
			opt_base += len;
			position += len;
		}
	}
}

static uint8_t ndp_mac_temp[8];

uint8_t* arp_lookup(IPAddr ip) {
	if(is_broadcast_addr(ip)) return 0;
	if(ip.type && ip.def_ipv6 && ip.ipv6[0] == 0xFF) {
		ndp_mac_temp[0] = 0x33;
		ndp_mac_temp[1] = 0x33;
		if(is_ndp_ip(ip)) {
			ndp_mac_temp[2] = 0xFF;
			ndp_mac_temp[3] = ip.ipv6[13];
			ndp_mac_temp[4] = ip.ipv6[14];
			ndp_mac_temp[5] = ip.ipv6[15];
			return ndp_mac_temp;
		}else if(is_icmpcast_ip(ip)) {
			ndp_mac_temp[2] = 0x00;
			ndp_mac_temp[3] = 0x00;
			ndp_mac_temp[4] = 0x00;
			ndp_mac_temp[5] = 0x02;
			return ndp_mac_temp;
		}
	}
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		if(arp_table[i].ip.def_ipv4 == 0 && arp_table[i].ip.def_ipv6 == 0) continue;
		if(compare_ips(arp_table[i].ip, ip)) return arp_table[i].mac;
	}
	if(ip.type && ip.def_ipv6) {
		//"all nodes" multicast
		ndp_mac_temp[0] = 0x33;
		ndp_mac_temp[1] = 0x33;
		ndp_mac_temp[2] = 0x00;
		ndp_mac_temp[3] = 0x00;
		ndp_mac_temp[4] = 0x00;
		ndp_mac_temp[5] = 0x01;
		return ndp_mac_temp;
	}
	return 0;
}

void arp_request(IPAddr ip) {
	if(ip.type) {
		if(!ip.def_ipv6) return;
		ndp_solicit(ip);
		return;
	}
	if(!ip.def_ipv4) return;
	uint8_t *p = eth_tx_header(0, ETHERNET_TYPE_ARP);
	uint8_t *orig = p;
	put_uint16(p, 1);
	p += 2;
	put_uint16(p, 0x0800);
	p += 2;
	*p = 6;
	p++;
	*p = 4;
	p++;
	put_uint16(p, 1);
	p += 2;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = our_mac[i];
	p += MAC_LENGTH;
	put_uint32(p, our_ip.ipv4);
	p += 4;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = 0x00;
	p += MAC_LENGTH;
	put_uint32(p, ip.ipv4);
	p += 4;
	//print_arp_header((ArpHeader*)(orig));
	eth_tx(p - orig);
}

void arp_table_add(uint8_t* mac, IPAddr ip) {
	//Replace random table entry if none matching the IP exists
	uint16_t idx = rng_next() % ARP_TABLE_SIZE;
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		if(arp_table[i].ip.def_ipv4 == 0 && arp_table[i].ip.def_ipv6 == 0) continue;
		if(compare_ips(arp_table[i].ip, ip)) {
			idx = i;
			break;
		}
	}
	arp_table[idx].ip = ip;
	arp_table[idx].padding = rng_next();
	arp_table[idx].ip.def_ipv4 = 1;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) arp_table[idx].mac[i] = mac[i];
#ifdef DEBUG_ARP
	puts("New entry in ARP table:");
	puts("MAC: "); debug_print_MAC(arp_table[idx].mac); puts("\r\n");
	puts("IPv4: "); debug_print_IPv4(arp_table[idx].ip); puts("\r\n");
	puts("\r\n");
#endif
}

void arp_table_remove(IPAddr ip) {
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		if(arp_table[i].ip.def_ipv4 == 0 && arp_table[i].ip.def_ipv6 == 0) continue;
		if(ip.type) {
			uint8_t match = 1;
			for(uint8_t j = 0; j < 16; j++) {
				if(arp_table[i].ip.ipv6[j] != ip.ipv6[j]) {
					match = 0;
					break;
				}
			}
			if(match) arp_table[i].ip.def_ipv6 = 0;
		}else if(ip.ipv4 == arp_table[i].ip.ipv4) {
			arp_table[i].ip.def_ipv4 = 0;
		}
	}
}
