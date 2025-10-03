#ifndef TCP_H_
#define TCP_H_

#define TCP_HEADER_LENGTH 20
#define TCP_MAX_WINDOW_SIZE (MAX_PAYLOAD_LENGTH - ETHERNET_HEADER_LENGTH - IPv6_HDR_LEN - TCP_HEADER_LENGTH - 8)
#define TCP_MAX_CONNECTIONS 4
#define TCP_START_CONNECTION_TIMEOUT 24
#define TCP_END_CONNECTION_TIMEOUT 7
#define TCP_MAX_BUFFER 4096

typedef struct {
	IPAddr ip;
	uint16_t source_port;
	uint16_t dest_port;
	uint32_t tx_seq;
	uint32_t ack_num;
	uint16_t tx_window;
	uint8_t state;
	uint8_t timeout;
	volatile uint16_t read_ptr;
	volatile uint16_t write_ptr;
	volatile uint8_t buffer[TCP_MAX_BUFFER];
	volatile uint32_t flags;
	volatile uint16_t remaining;
} TCPSocket;

void tcp_reset(void);
void tcp_update(void);
void tcp_parse_incoming(uint8_t* p, uint16_t packet_len);
uint8_t tcp_connect(IPAddr ip, uint16_t port, volatile TCPSocket **socket);
void tcp_close(volatile TCPSocket *socket);
uint16_t tcp_read(volatile TCPSocket* socket, uint8_t* buff, uint16_t len);
uint16_t tcp_skip(volatile TCPSocket* socket, uint16_t skip_amt);
uint16_t tcp_write(volatile TCPSocket* socket, const uint8_t* buff, uint16_t len);

#endif
