#include <stdint.h>

#include "ethernet.h"
#include "arp.h"

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
	
}
