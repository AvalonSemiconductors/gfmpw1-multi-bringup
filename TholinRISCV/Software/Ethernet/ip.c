#include <stdint.h>

#include "ethernet.h"
#include "ip.h"
#ifdef DEBUG_IP
#include "tholinstd.h"
#endif

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
	puts("Source IP: "); debug_print_IP(hdr->source_ip); puts("\r\n");
	puts("Destination IP: "); debug_print_IP(hdr->dest_ip); puts("\r\n");
	puts("------------\r\n\r\n");
}
#endif

void ip_reset(void) {
	
}

void ip_parse_incoming(EthernetFrame* raw) {
	IPv4Header hdr;
	uint8_t* p = raw->payload;
	hdr.dest_ip = EXTRACT_UINT32(p + 16);
	if(hdr.dest_ip != our_ip) return;
	hdr.version = *p >> 4;
	if(hdr.version != 4) return;
	hdr.IHL = *p & 0xFF;
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
	if(hdr.IHL > 5) p += (hdr.IHL - 5) << 2;
	hdr.payload = p;
#ifdef DEBUG_IP
	print_ip_header(&hdr);
#endif
	if((hdr.flags & 0b101) != 0) {
		//printf("IP header: invalid flags, %x\r\n", hdr.flags);
		return;
	}
}
