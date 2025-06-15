#ifndef IPUTILS_H_
#define IPUTILS_H_

typedef struct {
	uint32_t def_ipv4:1,
	def_ipv6:1,
	type:2,
	padd: 28;
	uint32_t ipv4;
	uint8_t ipv6[16];
} IPAddr;

void iputils_puthex8(uint8_t val);
void iputils_puthex16(uint16_t val);
void put_uint16(uint8_t* buff, uint16_t val);
void put_uint32(uint8_t* buff, uint32_t val);
void put_ipv6(uint8_t* buff, IPAddr val);
void debug_print_MAC(uint8_t* mac);
void debug_print_IPv4(uint32_t ip);
void debug_print_IPv6(IPAddr ip);
void debug_print_IP(IPAddr ip);
IPAddr ipv4(uint32_t ip);
IPAddr ipv4_parts(uint8_t a, uint8_t b, uint8_t c, uint8_t d);
IPAddr ipv6(uint8_t* ip);
IPAddr ipv6_parts(uint16_t a, uint16_t b, uint16_t c, uint16_t d, uint16_t e, uint16_t f, uint16_t g, uint16_t h);
uint8_t compare_ips(IPAddr a, IPAddr b);
uint8_t is_ndp_ip(IPAddr a);
IPAddr get_ndp_ip_base(void);
uint8_t is_broadcast_addr(IPAddr a);
IPAddr get_broadcast_addr(uint8_t type);
uint8_t is_icmpcast_ip(IPAddr a);
uint8_t is_local_addr(IPAddr a);
uint32_t ip_calc_checksum_partial(uint8_t* buffer, uint16_t len, uint32_t start_val);
uint16_t ip_calc_checksum(uint8_t* buffer, uint16_t len, uint32_t start_val);

#endif
