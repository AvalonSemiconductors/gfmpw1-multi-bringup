#ifndef ETHERNET_H_
#define ETHERNET_H_

#define MAC_LENGTH 6
#define MAX_PAYLOAD_LENGTH 1500

#define ETHERNET_HEADER_LENGTH 14
#define ETHERNET_TYPE_IP 0x0800
#define ETHERNET_TYPE_ARP 0x0806

//Extract misaligned uint32_t from byte buffer
#define EXTRACT_UINT32(x) ((*(x)) | ((uint32_t)(*((x)+1)) << 8) | ((uint32_t)(*((x)+2)) << 16) | ((uint32_t)(*(x)+3) << 24))
#define EXTRACT_UINT16(x) ((*(x)) | ((uint16_t)(*((x)+1)) << 8))

#define SWAP16(x) (((uint16_t)(x) << 8) | ((uint16_t)(x) >> 8))

struct EthernetFrame {
	uint8_t dest[MAC_LENGTH];
	uint8_t src[MAC_LENGTH];
	uint16_t type;
	uint8_t payload[MAX_PAYLOAD_LENGTH];
	uint32_t crc;
};

#define ARP_HEADER_LENGTH 28
#define ARP_REQUEST 0x0001
#define ARP_REPLY 0x0002

extern uint8_t eth_raw_packet[sizeof(EthernetFrame) + 16];

#endif
