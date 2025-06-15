#include <stdint.h>

#include "tholinstd.h"
#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "arp.h"
#include "phy.h"
#include "udp.h"

volatile IPAddr our_ip;
volatile IPAddr our_global_ipv6;
volatile IPAddr router_ip;
volatile IPAddr dns_ip;
uint32_t our_subnet;
volatile uint8_t our_mac[MAC_LENGTH];
uint8_t eth_in_interrupt;

uint8_t* eth_tx_buff;

uint8_t eth_tx_buff_reg     [sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));
uint8_t eth_raw_packet      [sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));
uint8_t eth_tx_buff_irupt   [sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));

uint8_t eth_rx_circ_buff[64 * 1024] __attribute__ ((aligned (4)));
uint32_t eth_buff_rptr = 0;
uint32_t eth_buff_wptr = 0;

uint8_t* eth_tx_header(uint8_t* mac, uint16_t type) {
	EthernetFrame *raw = (EthernetFrame*)eth_tx_buff;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) {
		raw->src[i] = our_mac[i];
		raw->dest[i] = mac ? mac[i] : 0xFF;
	}
	raw->type = SWAP16(type);
	raw->crc = 0;
	return raw->payload;
}

void eth_reset(void) {
	eth_buff_rptr = eth_buff_wptr = 0;
	eth_in_interrupt = 0;
	our_mac[0] = 0x5C;
	our_mac[1] = 0x0C;
	our_mac[2] = 0xB3;
	our_mac[3] = 0x4A;
	our_mac[4] = 0xFA;
	our_mac[5] = 0xC8;
	eth_tx_buff = eth_tx_buff_reg;
	phy_init();
	arp_reset();
	ip_reset();
	udp_reset();
	our_ip.ipv4 = 0;
	our_global_ipv6.def_ipv4 = our_global_ipv6.def_ipv6 = 0;
	dns_ip.def_ipv4 = dns_ip.def_ipv6 = 0;
	our_global_ipv6.type = 1;
	for(uint8_t i = 0; i < 16; i++) our_ip.ipv6[i] = our_global_ipv6.ipv6[i] = 0;
	our_ip.ipv6[0] = 0xFF;
	our_ip.def_ipv4 = our_ip.def_ipv6 = 0;
	router_ip.def_ipv4 = router_ip.def_ipv6 = 0;
	our_subnet = 0xFFFFFF00;
	our_ip.type = 2;
	router_ip.type = 2;
}

void eth_parse_incoming(void);

//Call regularly in interrupt
//Call ONLY from interrupt
void eth_update(void) {
	eth_tx_buff = eth_tx_buff_irupt;
	eth_in_interrupt = 1;
	//Stuff
	while(phy_available()) {
		uint16_t len = phy_receive(eth_raw_packet);
		if(len) {
			eth_parse_incoming();
		}
	}
	eth_tx_buff = eth_tx_buff_reg;
	eth_in_interrupt = 0;
}

uint8_t is_packet_for_us(EthernetFrame* frame) {
	uint8_t* a = frame->dest;
	if(a[0] == 0x33 && a[1] == 0x33) return 1; //Accept ICMPv6 multicast packets
	for(uint8_t i = 0; i < MAC_LENGTH; i++) {
		if(a[i] != 0xFF && a[i] != our_mac[i]) return 0;
	}
	return 1;
}

#ifdef DEBUG_ETHERNET
void eth_print_frame(EthernetFrame *frame) {
	puts("---- ETH ----\r\n");
	puts("Destination MAC: "); debug_print_MAC(frame->dest); puts("\r\n");
	puts("Source MAC: "); debug_print_MAC(frame->src); puts("\r\n");
	printf("Type: %x\r\n", frame->type);
	puts("-------------\r\n\r\n");
}
#endif

void eth_parse_incoming(void) {
	EthernetFrame *raw = (EthernetFrame*)eth_raw_packet;
	raw->type = SWAP16(raw->type);
#ifdef DEBUG_ETHERNET
	if(raw->type == ETHERNET_TYPE_ARP || raw->type == ETHERNET_TYPE_IP) eth_print_frame(raw);
#endif
	switch(raw->type) {
		case ETHERNET_TYPE_IP:
			/*raw->type = SWAP16(raw->type);
			for(uint8_t i = 0; i < 128; i++) {
				iputils_puthex8(eth_raw_packet[i]);
				putchar(' ');
			}
			puts("\r\n\r\n\r");
			raw->type = SWAP16(raw->type);*/
		case ETHERNET_TYPE_IPv6:
			if(!is_packet_for_us(raw)) return;
			ip_parse_incoming(raw);
			break;
		case ETHERNET_TYPE_ARP:
			/*for(uint8_t i = 0; i < 0x30; i++) {
				eth_puthex8(eth_raw_packet[i]);
				putchar(' ');
			}
			puts("\r\n\r\n");*/
			
			arp_parse_incoming(raw);
			break;
	}
}

void eth_tx(uint16_t payload_len) {
	if(payload_len > MAX_PAYLOAD_LENGTH + 4) return;
	phy_send(eth_tx_buff, 14 + payload_len);
}
