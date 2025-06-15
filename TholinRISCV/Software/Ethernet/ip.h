#ifndef IP_H_
#define IP_H_

#define IP_HDR_LEN 20
#define IPv6_HDR_LEN 40
#define IP_PROTOCOL_ICMP 1
#define IP_PROTOCOL_TCP 6
#define IP_PROTOCOL_UDP 17
#define IP_PROTOCOL_ICMPv6 58

void ip_reset(void);
void ip_parse_incoming(EthernetFrame* raw);
uint8_t* ip_tx_header(uint16_t payload_len, uint8_t protocol, IPAddr dest);
uint8_t* ipv6_tx_header(uint16_t payload_len, uint8_t protocol, IPAddr dest);
uint8_t* icmpv6_tx_header(uint16_t payload_len, uint8_t type, uint8_t code, IPAddr dest);
void icmpv6_checksum(uint8_t* ptr, uint16_t payload_len);
void ip_tx(uint16_t payload_len);
void ipv6_tx(uint16_t payload_len);
void icmpv6_router_solicitation(void);

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

typedef struct {
	uint8_t* payload;
	uint32_t flow_label;
	uint8_t version;
	uint8_t traffic_class;
	uint16_t len;
	uint8_t next_header;
	uint8_t hop_limit;
	IPAddr source_ip;
	IPAddr dest_ip;
} IPv6Header;

typedef struct {
	uint8_t type;
	uint8_t code;
	uint16_t checksum;
	uint16_t ID;
	uint16_t seq_nr;
} ICMPHeader;

#endif
