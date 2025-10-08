#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "arp.h"
#include "udp.h"
#include "tcp.h"
#include "slaac.h"
#ifdef DEBUG_IP
#include "tholinstd.h"
#endif
#include "xorshift.h"

#ifdef DEBUG_IP
void print_ip_header(IPv4Header *hdr) {
	puts("---- IP ----\r\n");
	printf("Version: %u\r\nIHL: %u\r\nLength: %u\r\nFlags: %x\r\nTTL: %u\r\n", hdr->version, hdr->IHL, hdr->len, hdr->flags, hdr->TTL);
	puts("Protocol: ");
	switch(hdr->protocol) {
		default:
			puts("UNKNOWN\r\n");
			break;
		case 1:
			puts("ICMP\r\n");
			break;
		case 2:
			puts("IGMP\r\n");
			break;
		case 6:
			puts("TCP\r\n");
			break;
		case 17:
			puts("UDP\r\n");
			break;
		case 41:
			puts("ENCAP\r\n");
			break;
		case 89:
			puts("OSPF\r\n");
			break;
		case 132:
			puts("SCTP\r\n");
			break;
	}
	printf("Checksum: %x\r\n", hdr->checksum);
	puts("Source IP: "); debug_print_IPv4(hdr->source_ip); puts("\r\n");
	puts("Destination IP: "); debug_print_IPv4(hdr->dest_ip); puts("\r\n");
	puts("------------\r\n\r\n");
}
#endif

static uint8_t hop_limit = 0xFF;
static uint16_t ip_counter = 0;

void ip_reset(void) {
	ip_counter = 0;
	hop_limit = 0xFF;
	tcp_reset();
}

uint8_t* ipv4_tx_header(uint16_t payload_len, uint8_t protocol, IPAddr dest) {
	uint8_t is_dest_local = is_local_addr(dest); //TODO
	uint8_t *dest_mac;
	if(is_dest_local) dest_mac = arp_lookup(dest);
	else dest_mac = arp_lookup(router_ip);
	uint8_t *p = eth_tx_header(dest_mac, ETHERNET_TYPE_IP);
	uint8_t *orig = p;
	p[0] = 0x45;
	p[1] = 0;
	p += 2;
	put_uint16(p, payload_len + 20);
	p += 2;
	put_uint16(p, ip_counter++); //ID
	p += 2;
	put_uint16(p, 0b010 << 13); //Flags & F. Offset
	p += 2;
	p[0] = 128; //TTL
	p[1] = protocol;
	p += 2;
	p[0] = 0;
	p[1] = 0;
	put_uint32(p + 2, our_ip.ipv4);
	put_uint32(p + 6, dest.ipv4);
	put_uint16(p, ip_calc_checksum(orig, 20, 0));
	return p + 10;
}

uint8_t* ipv6_tx_header(uint16_t payload_len, uint8_t protocol, IPAddr dest) {
	uint8_t is_dest_local = is_local_addr(dest);
	uint8_t *dest_mac;
	if(is_dest_local) dest_mac = arp_lookup(dest);
	else dest_mac = arp_lookup(router_ip);
	uint8_t *p = eth_tx_header(dest_mac, ETHERNET_TYPE_IPv6);
	//Version 6, no traffic class, no flow label
	p[0] = 0x60;
	p[1] = 0;
	p[2] = 0;
	p[3] = 0;
	p += 4;
	put_uint16(p, payload_len);
	p += 2;
	*p = protocol;
	p++;
	*p = hop_limit;
	p++;
	if(is_dest_local) put_ipv6(p, our_ip);
	else put_ipv6(p, our_global_ipv6);
	p += 16;
	put_ipv6(p, dest);
	return p + 16;
}

//Construct an IP message header
uint8_t* ip_tx_header(uint16_t payload_len, uint8_t protocol, IPAddr dest) {
	if(dest.type) return ipv6_tx_header(payload_len, protocol, dest);
	else return ipv4_tx_header(payload_len, protocol, dest);
}

uint8_t* icmpv6_tx_header(uint16_t payload_len, uint8_t type, uint8_t code, IPAddr dest) {
	uint8_t *p = ipv6_tx_header(payload_len + 4, IP_PROTOCOL_ICMPv6, dest);
	p[0] = type;
	p[1] = code;
	p[2] = p[3] = 0;
	return p + 4;
}

void icmpv6_checksum(uint8_t* ptr, uint16_t payload_len) {
	uint8_t pseudo_header[40];
	uint8_t *ip_base = ptr - 4 - 32;
	for(uint8_t i = 0; i < 32; i++) pseudo_header[i] = ip_base[i];
	put_uint32(pseudo_header + 32, payload_len + 4);
	pseudo_header[36] = 0;
	pseudo_header[37] = 0;
	pseudo_header[38] = 0;
	pseudo_header[39] = 58;
	uint32_t partial = ip_calc_checksum_partial(pseudo_header, 40, 0);
	put_uint16(ptr - 2, ip_calc_checksum(ptr - 4, payload_len + 4, partial));
}

void ip_tx(uint16_t payload_len) {
	eth_tx(payload_len + IP_HDR_LEN);
}

void ipv6_tx(uint16_t payload_len) {
	eth_tx(payload_len + IPv6_HDR_LEN);
}

void ipv4_parse_incoming(EthernetFrame* raw) {
#ifdef DEBUG_IP
	puts("ip_parse_incoming\r\n");
#endif
	IPv4Header hdr;
	uint8_t* p = raw->payload;
	hdr.dest_ip = EXTRACT_UINT32(p + 16);
	uint8_t ip_match = hdr.dest_ip == our_ip.ipv4 || hdr.dest_ip == 0xFFFFFFFF || hdr.dest_ip == 0x00000000;
	if(our_ip.def_ipv4 != 0 && !ip_match) return; //During configuration phase, accept everything UDP
	hdr.version = *p >> 4;
	if(hdr.version != 4) return;
	hdr.IHL = *p & 0x0F;
	p++;
	hdr.DSCP = *p >> 2;
	hdr.ECN = *p & 3;
	p++;
	hdr.len = EXTRACT_UINT16(p);
	p += 2;
	hdr.id = EXTRACT_UINT16(p);
	p += 2;
	hdr.flags = *p >> 5;
	hdr.f_offset = EXTRACT_UINT16(p);
	hdr.f_offset &= 0x1FFF;
	p += 2;
	hdr.TTL = *p;
	p++;
	hdr.protocol = *p;
	p++;
	hdr.checksum = EXTRACT_UINT16(p);
	p += 2;
	hdr.source_ip = EXTRACT_UINT32(p);
	p += 4;
	//hdr.dest_ip = EXTRACT_UINT32(p);
	p += 4;
	uint32_t header_len = 20;
	if(hdr.IHL > 5) {
		uint16_t to_add = (hdr.IHL - 5) << 2;
		p += to_add;
		header_len += to_add;
	}
	hdr.payload = p;
#ifdef DEBUG_IP
	print_ip_header(&hdr);
#endif
	if((hdr.flags & 0b101) != 0) {
		//printf("IP header: invalid flags, %x\r\n", hdr.flags);
		return;
	}
	if(hdr.protocol == IP_PROTOCOL_UDP) {
		//UDP
		udp_parse_incoming(hdr.payload);
	}else if(hdr.protocol == IP_PROTOCOL_TCP) {
		//TCP
		if(!ip_match) return;
		tcp_parse_incoming(hdr.payload, hdr.len - header_len, ipv4(hdr.source_ip));
	}else if(hdr.protocol == IP_PROTOCOL_ICMP) {
		//ICMP
		if(ip_match && hdr.payload[0] == 0x08) { //Ping is the only supported message type
			ICMPHeader ihdr;
			ihdr.type = hdr.payload[0];
			ihdr.code = hdr.payload[1];
			if(ihdr.code != 0) return;
			ihdr.checksum = EXTRACT_UINT16(hdr.payload + 2);
			hdr.payload += 4;
			ihdr.ID = EXTRACT_UINT16(hdr.payload);
			ihdr.seq_nr = EXTRACT_UINT16(hdr.payload + 2);
			hdr.payload += 4;
			
			int32_t extra_len = hdr.len - header_len - 8;
			if(extra_len < 0) extra_len = 0;
			
			uint8_t* p = ipv4_tx_header((uint16_t)extra_len + 8, IP_PROTOCOL_ICMP, ipv4(hdr.source_ip));
			p[0] = 0x00;
			p[1] = 0x00;
			p[2] = 0x00;
			p[3] = 0x00;
			put_uint16(p + 4, ihdr.ID);
			put_uint16(p + 6, ihdr.seq_nr);
			if(extra_len) for(uint32_t i = 0; i < extra_len; i++) {
				p[8 + i] = hdr.payload[i];
			}
			put_uint16(p + 2, ip_calc_checksum(p, 8 + extra_len, 0));
			ip_tx(8 + extra_len);
		}
	}
}

void ipv6_parse_incoming(EthernetFrame* raw) {
	IPv6Header hdr;
	uint8_t* p = raw->payload;
	hdr.version = *p >> 4;
	if(hdr.version != 6) return;
	hdr.traffic_class = (*p & 0xF) << 4;
	p++;
	hdr.traffic_class |= *p >> 4;
	hdr.flow_label = (uint32_t)(*p & 0xF) << 16;
	hdr.flow_label |= (uint32_t)(*(p + 1)) << 8;
	hdr.flow_label |= *(p + 2);
	p += 3;
	hdr.len = EXTRACT_UINT16(p);
	p += 2;
	hdr.next_header = *p;
	p++;
	hdr.hop_limit = *p;
	p++;
	uint8_t ip_match = 1;
	uint8_t gip_match = our_global_ipv6.def_ipv6;
	for(uint8_t i = 0; i < 16; i++) {
		hdr.source_ip.ipv6[i] = p[i];
		hdr.dest_ip.ipv6[i] = p[16 + i];
		if(hdr.dest_ip.ipv6[i] != our_ip.ipv6[i] && our_ip.def_ipv6 != 0) ip_match = 0;
		if(hdr.dest_ip.ipv6[i] != our_global_ipv6.ipv6[i]) gip_match = 0;
	}
	ip_match |= gip_match;
	hdr.source_ip.def_ipv4 = 0;
	hdr.dest_ip.def_ipv4 = 0;
	hdr.source_ip.type = 1;
	hdr.dest_ip.type = 1;
	hdr.source_ip.def_ipv6 = 1;
	hdr.dest_ip.def_ipv6 = 1;
	hdr.payload = p + 32;
	if(!ip_match) {
		//Is this a multicast ICMP?
		if(hdr.next_header == IP_PROTOCOL_ICMPv6) {
			ip_match = hdr.dest_ip.ipv6[0] == 0xff;
		}
	}
	
	if(our_ip.def_ipv6 != 0 && !ip_match) return;
	p += 32;
	if(hdr.next_header == IP_PROTOCOL_UDP) {
		//UDP
		udp_parse_incoming(hdr.payload);
	}else if(hdr.next_header == IP_PROTOCOL_TCP) {
		//TCP
		tcp_parse_incoming(hdr.payload, hdr.len - 32, hdr.source_ip);
	}else if(hdr.next_header == IP_PROTOCOL_ICMPv6) {
		ICMPHeader ihdr;
		ihdr.type = hdr.payload[0];
		ihdr.code = hdr.payload[1];
		if(ihdr.code != 0) return;
		ihdr.checksum = EXTRACT_UINT16(hdr.payload + 2);
		hdr.payload += 4;
		if(ihdr.type == 128 && ihdr.code == 0) {
			int32_t extra_len = hdr.len - 4;
			if(extra_len < 4) return; //Malformed echo request, missing ID and Seq. No.
			
			uint8_t* p = icmpv6_tx_header(extra_len, 129, 0, hdr.source_ip);
			if(extra_len) for(uint32_t i = 0; i < extra_len; i++) p[i] = hdr.payload[i];
			put_uint16(p, rng_next()); //Edit ID field
			icmpv6_checksum(p, extra_len);
			ipv6_tx(extra_len + 4);
		}else if((ihdr.type == 135 || ihdr.type == 136) && ihdr.code == 0) arp_parse_ndp(ihdr, hdr);
		else if(ihdr.type == 134 && ihdr.code == 0) {
			//Router advertisement (SLAAC)
			if(!slaac_handle_router_advertisement(hdr)) hop_limit = hdr.payload[0];
		}
	}
}

void ip_parse_incoming(EthernetFrame* raw) {
	uint8_t version = raw->payload[0] >> 4;
	if(version == 4) ipv4_parse_incoming(raw);
	else if(version == 6) ipv6_parse_incoming(raw);
}

void icmpv6_router_solicitation(void) {
	IPAddr dest = get_broadcast_addr(1);
	dest.ipv6[0] = 0xff;
	dest.ipv6[1] = 0x02;
	dest.ipv6[15] = 0x02;
	uint8_t* p = icmpv6_tx_header(4, 133, 0, dest);
	p[0] = p[1] = p[2] = p[3] = 0x00;
	icmpv6_checksum(p, 4);
	ipv6_tx(8);
}
