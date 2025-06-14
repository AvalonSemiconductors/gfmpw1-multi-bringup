#ifndef ETHERNET_H_
#define ETHERNET_H_

#define MAC_LENGTH 6
#define MAX_PAYLOAD_LENGTH 1500

#define ETHERNET_HEADER_LENGTH 14
#define ETHERNET_TYPE_IP 0x0800
#define ETHERNET_TYPE_IPv6 0x86DD
#define ETHERNET_TYPE_ARP 0x0806

//Extract misaligned uint32_t from byte buffer
#define EXTRACT_UINT32(x) ((*((x)+3)) | ((uint32_t)(*((x)+2)) << 8) | ((uint32_t)(*((x)+1)) << 16) | ((uint32_t)(*(x)) << 24))
#define EXTRACT_UINT16(x) ((*((x)+1)) | ((uint16_t)(*((x))) << 8))

#define SWAP16(x) (((uint16_t)(x) << 8) | ((uint16_t)(x) >> 8))
#define SWAP32(x) (((uint32_t)(x) << 24) | ((uint32_t)(x) >> 24) | (((uint32_t)(x) & 0xFF0000) >> 8) | (((uint32_t)(x) & 0xFF00) << 8))

typedef struct {
	uint8_t dest[MAC_LENGTH];
	uint8_t src[MAC_LENGTH];
	uint16_t type;
	uint8_t payload[MAX_PAYLOAD_LENGTH+4];
	uint32_t crc;
} EthernetFrame;

#define ARP_HEADER_LENGTH 28
#define ARP_REQUEST 0x0001
#define ARP_REPLY 0x0002

extern volatile IPAddr our_ip;
extern volatile IPAddr our_global_ipv6;
extern volatile IPAddr router_ip;
extern volatile IPAddr dns_ip;
extern volatile uint8_t our_mac[MAC_LENGTH];
extern uint8_t eth_in_interrupt;

void eth_reset(void);
uint8_t* eth_tx_header(uint8_t* mac, uint16_t type);
void eth_tx(uint16_t payload_len);
void eth_update(void);

#endif
