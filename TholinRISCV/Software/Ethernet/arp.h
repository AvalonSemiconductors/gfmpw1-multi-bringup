#ifndef ARP_H_
#define ARP_H_

typedef struct {
	uint32_t spa;
	uint32_t tpa;
	uint16_t htype;
	uint16_t ptype;
	uint8_t hlen;
	uint8_t plen;
	uint16_t oper;
	uint8_t sha[MAC_LENGTH];
	uint8_t tha[MAC_LENGTH];
}ArpHeader;

typedef struct {
	IPAddr ip;
	uint16_t padding;
	uint8_t mac[MAC_LENGTH];
}ArpEntry;

void arp_reset(void);
void arp_parse_incoming(EthernetFrame* raw);
void arp_parse_ndp(ICMPHeader ihdr, IPv6Header hdr);
uint8_t* arp_lookup(IPAddr ip);
void ndp_solicit(IPAddr ip);
void arp_request(IPAddr ip);
void arp_table_add(uint8_t* mac, IPAddr ip);
void arp_table_remove(IPAddr ip);

#endif
