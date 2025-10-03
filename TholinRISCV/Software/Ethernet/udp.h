#ifndef UDP_H_
#define UDP_H_

#define UDP_MAX_BUFFER 2048
//Minimum is 1 for DHCP
#define UDP_MAX_SOCKETS 2

#define UDP_HEADER_LENGTH 8

void udp_reset(void);
void udp_parse_incoming(uint8_t* p);
uint8_t udp_open_port(uint16_t port);
void udp_close_port(uint16_t port);
uint16_t udp_available(uint16_t port);
uint16_t udp_skip(uint16_t port, uint16_t skip_amt);
uint16_t udp_read(uint16_t port, uint8_t* buff, uint16_t len);
uint16_t udp_write(uint16_t port, IPAddr ip, const uint8_t* buff, uint16_t len);

typedef struct {
	uint16_t source_port;
	uint16_t dest_port;
	uint16_t length;
	uint16_t checksum;
} UDPHeader;

typedef struct {
	uint16_t port;
	volatile uint16_t remaining;
	volatile uint32_t flags;
	volatile uint16_t read_ptr;
	volatile uint16_t write_ptr;
	volatile uint8_t buffer[UDP_MAX_BUFFER];
} UDPSocket;

#endif
