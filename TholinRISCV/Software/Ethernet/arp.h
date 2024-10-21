#ifndef ARP_H_
#define ARP_H_

struct ArpHeader {
	uint16_t htype;
	uint16_t ptype;
	uint8_t hlen;
	uint8_t plen;
	uint16_t oper;
	uint8_t sha[MAC_LENGTH];
	uint32_t spa;
	uint8_t tha[MAC_LENGTH];
	uint32_t tpa;
};

void arp_parse_incoming(EthernetFrame* raw);

#endif
