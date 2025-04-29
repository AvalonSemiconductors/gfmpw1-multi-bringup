#include <stdint.h>

#include "tholinstd.h"
#include "ethernet.h"
#include "arp.h"
#include "phy.h"
#include "ip.h"

uint32_t our_ip;
uint32_t our_subnet;
uint8_t our_mac[MAC_LENGTH];
uint8_t eth_in_interrupt;

uint8_t* eth_raw_packet;
uint8_t* eth_tx_buff;

uint8_t eth_raw_packet_reg[sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));
uint8_t eth_tx_buff_reg[sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));
uint8_t eth_raw_packet_irupt[sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));
uint8_t eth_tx_buff_irupt[sizeof(EthernetFrame) + 24] __attribute__ ((aligned (4)));

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
	eth_in_interrupt = 0;
	our_mac[0] = 0x91;
	our_mac[1] = 0x0C;
	our_mac[2] = 0xB3;
	our_mac[3] = 0x4A;
	our_mac[4] = 0xFA;
	our_mac[5] = 0xC8;
	eth_raw_packet = eth_raw_packet_reg;
	eth_tx_buff = eth_tx_buff_reg;
	phy_init();
	arp_reset();
	ip_reset();
	our_ip = 0;
	our_subnet = 0xFFFFFF00;
}

void eth_parse_incoming(void);

//Call regularly in interrupt
void eth_update(void) {
	eth_raw_packet = eth_raw_packet_irupt;
	eth_tx_buff = eth_tx_buff_irupt;
	eth_in_interrupt = 1;
	//Stuff
	if(phy_available()) {
		if(phy_receive(eth_raw_packet)) {
			eth_parse_incoming();
		}
	}
	eth_raw_packet = eth_raw_packet_reg;
	eth_tx_buff = eth_tx_buff_reg;
	eth_in_interrupt = 0;
}

uint8_t is_packet_for_us(EthernetFrame* frame) {
	uint8_t* a = frame->dest;
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
			if(!is_packet_for_us(raw)) return;
			ip_parse_incoming(raw);
			break;
		case ETHERNET_TYPE_ARP:
			arp_parse_incoming(raw);
			break;
	}
}

void eth_tx(uint16_t payload_len) {
	if(payload_len > MAX_PAYLOAD_LENGTH + 4) return;
	phy_send(eth_tx_buff, 14 + payload_len);
}

void put_uint16(uint8_t* buff, uint16_t val) {
	buff[0] = val >> 8;
	buff[1] = val;
}

void put_uint32(uint8_t* buff, uint32_t val) {
	buff[0] = val >> 24;
	buff[1] = val >> 16;
	buff[2] = val >> 8;
	buff[3] = val;
}

static const char mac_hexchars[]  __attribute__ ((aligned (4))) = "0123456789ABCDEF";

void eth_puthex8(uint8_t val) {
	putchar(mac_hexchars[(val >> 4) & 0xF]); putchar(mac_hexchars[val & 0xF]);
	//uint8_t t = val >> 4;
	//if(t < 10) putchar('0' + t);
	//else putchar('A' + t - 10);
	//t = val & 0xF;
	//if(t < 10) putchar('0' + t);
	//else putchar('A' + t - 10);
}

void debug_print_MAC(uint8_t* mac) {
	uint8_t val;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) {
		eth_puthex8(mac[i]);
		if(i != MAC_LENGTH - 1) putchar('-');
	}
}

void debug_print_IP(uint32_t ip) {
	uint8_t* p = (uint8_t*)(&ip);
	printf("%u.%u.%u.%u", p[3], p[2], p[1], p[0]);
}
