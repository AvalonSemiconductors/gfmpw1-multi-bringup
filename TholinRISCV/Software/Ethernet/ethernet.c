#include <stdint.h>

#include "tholinstd.h"
#include "ethernet.h"
#include "arp.h"

uint8_t eth_raw_packet[sizeof(EthernetFrame) + 16] __attribute__ ((aligned (4)));

void eth_parse_incomming() {
	EthernetFrame result;
	EthernetFrame *raw = (EthernetFrame*)eth_raw_packet;
	raw->type = SWAP16(raw->type);
	switch(raw->type) {
		case ETHERNET_TYPE_IP:
			break;
		case ETHERNET_TYPE_ARP:
			arp_parse_incomming(raw);
			break;
	}
}
