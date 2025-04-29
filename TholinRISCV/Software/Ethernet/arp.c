#include <stdint.h>

#define DEBUG_ARP

#ifdef DEBUG_ARP
#include "tholinstd.h"
#endif
#include "ethernet.h"
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
	puts("Sender IPv4: "); debug_print_IP(hdr->spa); puts("\r\n");
	puts("Target MAC: "); debug_print_MAC(hdr->tha); puts("\r\n");
	puts("Target IPv4: "); debug_print_IP(hdr->tpa); puts("\r\n");
	puts("-------------\r\n\r\n");
}
#endif

void arp_reset(void) {
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		arp_table[i].ip = 0;
		arp_table[i].padding = 0x0621;
	}
}

void arp_handle_request(ArpHeader* hdr) {
	if(our_ip == 0 || hdr->tpa != our_ip) return;
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
	put_uint32(p, our_ip);
	p += 4;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = hdr->sha[i];
	p += MAC_LENGTH;
	put_uint32(p, hdr->spa);
	p += 4;
	//print_arp_header((ArpHeader*)(orig));
	eth_tx(p - orig);
	arp_table_add(hdr->sha, hdr->spa);
}

void arp_handle_reply(ArpHeader* hdr) {
	//Cache in table
	arp_table_add(hdr->sha, hdr->spa);
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
	}else {
		arp_handle_reply(&hdr);
	}
}

uint8_t* arp_lookup(uint32_t ip) {
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		if(arp_table[i].ip == 0) continue;
		if(arp_table[i].ip == ip) return arp_table[i].mac;
	}
	return 0;
}

void arp_request(uint32_t ip) {
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
	put_uint32(p, our_ip == 0 ? 0xFFFFFFFF : our_ip);
	p += 4;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) p[i] = 0xFF;
	p += MAC_LENGTH;
	put_uint32(p, ip);
	p += 4;
	//print_arp_header((ArpHeader*)(orig));
	eth_tx(p - orig);
}

void arp_table_add(uint8_t* mac, uint32_t ip) {
	//Replace random table entry if none matching the IP exists
	uint16_t idx = rng_next();
	for(uint16_t i = 0; i < ARP_TABLE_SIZE; i++) {
		if(arp_table[i].ip == 0) continue;
		if(arp_table[i].ip == ip) {
			idx = i;
			break;
		}
	}
	arp_table[idx].ip = ip;
	arp_table[idx].padding = rng_next();
	for(uint8_t i = 0; i < MAC_LENGTH; i++) arp_table[idx].mac[i] = mac[i];
}
