#ifndef IP_H_
#define IP_H_

void ip_reset(void);
void ip_parse_incoming(EthernetFrame* raw);

typedef struct {
	uint8_t version;
	uint8_t IHL;
	uint8_t DSCP;
	uint8_t ECN;
	uint16_t len;
	uint16_t id;
	uint8_t flags;
	uint16_t f_offset;
	uint8_t TTL;
	uint8_t protocol;
	uint16_t checksum;
	uint32_t source_ip;
	uint32_t dest_ip;
	uint8_t* payload;
} IPv4Header;

#endif
