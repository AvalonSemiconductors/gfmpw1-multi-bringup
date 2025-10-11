#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "ip.h"
#include "tcp.h"
#include "xorshift.h"
#include "phy.h"
#include "tholinstd.h"
#include "int_stuff.h"

struct PendingConnection {
	IPAddr sourceIP;
	uint16_t source_port;
	uint16_t dest_port;
	uint32_t ack_nr;
};

static volatile TCPSocket tcp_cons[TCP_MAX_CONNECTIONS] __attribute__ ((aligned (4)));
static volatile struct PendingConnection pending_cons[TCP_MAX_CONNECTIONS] __attribute__ ((aligned (4)));

void tcp_reset(void) {
	for(int i = 0; i < TCP_MAX_CONNECTIONS; i++) {
		tcp_cons[i].state = 0;
		pending_cons[i].source_port = pending_cons[i].dest_port = 0;
	}
}

uint8_t* tcp_tx_header(uint16_t data_len, volatile TCPSocket* socket, uint8_t flags) {
	uint8_t* p = ip_tx_header(data_len + TCP_HEADER_LENGTH, IP_PROTOCOL_TCP, socket->ip);
	put_uint16(p, socket->source_port);
	p += 2;
	put_uint16(p, socket->dest_port);
	p += 2;
	put_uint32(p, socket->tx_seq);
	p += 4;
	put_uint32(p, socket->ack_num);
	p += 4;
	*p = 5 << 4; //Data Offset
	p++;
	*p = flags;
	p++;
	put_uint16(p, TCP_MAX_WINDOW_SIZE);
	p += 2;
	put_uint16(p, 0); //Checksum - blank for now
	p += 2;
	put_uint16(p, 0);
	p += 2;
	return p;
}

void tcp_checksum(uint8_t* p, uint16_t data_len, IPAddr dest) {
	uint8_t to_copy = 32;
	if(dest.type == 0) to_copy = 8;
	uint8_t pseudo_header[40];
	uint8_t* a = p - TCP_HEADER_LENGTH - to_copy;
	for(uint8_t i = 0; i < to_copy; i++) pseudo_header[i] = a[i];
	uint32_t partial = 0;
	if(dest.type) {
		put_uint32(pseudo_header + to_copy, data_len + TCP_HEADER_LENGTH);
		pseudo_header[to_copy+4] = pseudo_header[to_copy+5] = pseudo_header[to_copy+6] = 0x00;
		pseudo_header[to_copy+7] = 6;
		partial = ip_calc_checksum_partial(pseudo_header, to_copy+8, 0);
	}else {
		pseudo_header[to_copy] = 0;
		pseudo_header[to_copy+1] = 6;
		put_uint16(pseudo_header + to_copy+2, data_len + TCP_HEADER_LENGTH);
		partial = ip_calc_checksum_partial(pseudo_header, to_copy+4, 0);
	}
	put_uint16(p - 4, ip_calc_checksum(p - TCP_HEADER_LENGTH, data_len + TCP_HEADER_LENGTH, partial));
}

uint16_t tcp_internal_write(volatile TCPSocket *socket, uint8_t flags, const uint8_t* buff, uint16_t len) {
	uint8_t* p = tcp_tx_header(len, socket, flags);
	uint8_t* orig = p;
	uint16_t i = len;
	while(i) {
		*p++ = *buff++;
		i--;
	}
	tcp_checksum(orig, len, socket->ip);
	socket->tx_seq += len;
	if(socket->ip.type) ipv6_tx(len + TCP_HEADER_LENGTH);
	else ip_tx(len + TCP_HEADER_LENGTH);
	return len;
}

uint8_t tcp_connect(IPAddr ip, uint16_t port, volatile TCPSocket **socket) {
	uint16_t dest_idx = 0xFFFF;
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) if(tcp_cons[i].state == 0) {
		dest_idx = i;
		break;
	}
	if(dest_idx == 0xFFFF) return 55;
	volatile TCPSocket* chosen = tcp_cons + dest_idx;
	chosen->ip = ip;
	chosen->source_port = port;
	chosen->dest_port = port;
	chosen->tx_seq = rng_next();
	chosen->ack_num = 0;
	chosen->tx_window = TCP_MAX_WINDOW_SIZE;
	chosen->remaining = 0;
	chosen->read_ptr = 0;
	chosen->write_ptr = 0;
	chosen->timeout = TCP_START_CONNECTION_TIMEOUT;
	*socket = chosen;
	chosen->state = 1;
	tcp_internal_write(chosen, TCP_FLAG_SYN, 0, 0);
	return 0;
}

void tcp_close(volatile TCPSocket *socket) {
	if(socket->state != 4) return;
	tcp_internal_write(socket, TCP_FLAG_ACK | TCP_FLAG_FIN, 0, 0);
	socket->timeout = TCP_END_CONNECTION_TIMEOUT;
	socket->state = 2;
}

uint16_t tcp_read(volatile TCPSocket* socket, uint8_t* buff, uint16_t len) {
	if(socket->remaining == 0 || len == 0) return 0;
	//For now, we allow reading from sockets where the state is 0, to allow reading of the last data received before the connection closed
	//Not a pretty and definitely unsafe implementation, but eh, good enough for me
	phy_pause_interrupts();
	uint16_t to_read = len;
	uint16_t remaining = socket->remaining;
	if(to_read > remaining) to_read = remaining;
	volatile uint8_t* src = socket->buffer;
	uint16_t ctr = to_read;
	while(ctr) {
		*buff++ = src[socket->read_ptr++];
		ctr--;
		socket->read_ptr %= TCP_MAX_BUFFER;
	}
	socket->remaining -= to_read;
	phy_unpause_interrupts();
	return to_read;
}

uint16_t tcp_skip(volatile TCPSocket* socket, uint16_t skip_amt) {
	if(socket->remaining == 0 || skip_amt == 0) return 0;
	phy_pause_interrupts();
	uint16_t to_skip = skip_amt;
	uint16_t remaining = socket->remaining;
	if(to_skip > remaining) to_skip = remaining;
	uint32_t temp = socket->read_ptr;
	temp += to_skip;
	temp %= TCP_MAX_BUFFER;
	socket->read_ptr = (uint16_t)temp;
	socket->remaining -= to_skip;
	phy_unpause_interrupts();
	return to_skip;
}

uint32_t tcp_write(volatile TCPSocket* socket, const uint8_t* buff, uint32_t len) {
	if(socket->state != 4) return 0;
	if(len == 0) return 0;
	const uint16_t max_tx = socket->tx_window;
	uint32_t written = 0;
	uint8_t packet_count = 0;
	uint32_t int_count_orig = int_count;
	while(len) {
		uint32_t to_write = len;
		if(to_write > max_tx) to_write = max_tx;
		to_write = tcp_internal_write(socket, TCP_FLAG_ACK | TCP_FLAG_PSH, buff + written, to_write);
		if(int_count != int_count_orig) {
			packet_count = 0;
			int_count_orig = int_count;
		}
		packet_count++;
		if(packet_count == 8) {
			packet_count = 0;
			while(int_count == int_count_orig) {asm volatile("nop");};
			int_count_orig = int_count;
		}
		len -= to_write;
		written += to_write;
	}
	if(written) socket->flags &= ~2;
	return written;
}

void tcp_update(void) {
	//Handle 
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) {
		if(tcp_cons[i].timeout != 255) {
			if(tcp_cons[i].timeout == 0) {
				if(tcp_cons[i].state == 1 || tcp_cons[i].state == 5) printf("TCP: Connection timeout!\r\n");
				if(tcp_cons[i].state == 4) {
					tcp_close(tcp_cons + i);
					continue;
				}
				tcp_cons[i].state = 0;
				continue;
			}
			tcp_cons[i].timeout--;
		}
	}
}

#ifdef TCP_ALLOW_INCOMING
uint16_t tcp_num_incoming(void) {
	uint16_t num = 0;
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) {
		if(pending_cons[i].dest_port != 0 || pending_cons[i].source_port != 0) num++;
	}
	return num;
}

uint8_t tcp_accept(volatile TCPSocket **socket) {
	uint16_t idx = 0xFFFF;
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) {
		if(pending_cons[i].dest_port != 0 || pending_cons[i].source_port != 0) {
			idx = i;
			break;
		}
	}
	if(idx == 0xFFFF) return 44;
	uint16_t dest_idx = 0xFFFF;
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) if(tcp_cons[i].state == 0) {
		dest_idx = i;
		break;
	}
	if(dest_idx == 0xFFFF) return 55;
	volatile TCPSocket* chosen = tcp_cons + dest_idx;
	chosen->tx_seq = rng_next();
	chosen->ack_num = pending_cons[idx].ack_nr;
	chosen->ip = pending_cons[idx].sourceIP;
	chosen->dest_port = pending_cons[idx].source_port;
	chosen->source_port = pending_cons[idx].dest_port;
	chosen->tx_window = TCP_MAX_WINDOW_SIZE;
	chosen->remaining = 0;
	chosen->read_ptr = 0;
	chosen->write_ptr = 0;
	pending_cons[idx].source_port = pending_cons[idx].dest_port = 0;
	chosen->timeout = TCP_START_CONNECTION_TIMEOUT;
	*socket = chosen;
	chosen->state = 5;
	tcp_internal_write(chosen, TCP_FLAG_SYN | TCP_FLAG_ACK, 0, 0);
	chosen->tx_seq++;
	return 0;
}
#endif

void tcp_parse_incoming(uint8_t* p, uint16_t packet_len, IPAddr sourceIP) {
	uint8_t dataoffset = p[12] >> 4;
	if(dataoffset < 5) return;
	dataoffset <<= 2;
	uint8_t* data = p + dataoffset;
	uint16_t data_len = packet_len - dataoffset;
	uint16_t source_port = EXTRACT_UINT16(p);
	p += 2;
	uint16_t dest_port = EXTRACT_UINT16(p);
	p += 2;
	uint32_t seq_nr = EXTRACT_UINT32(p);
	p += 4;
	uint32_t ack_nr = EXTRACT_UINT32(p);
	p += 5;
	uint8_t flags = *p;
	p++;
	uint16_t window = EXTRACT_UINT16(p);
	//printf("tcp_parse_incoming %u %u\r\n", dest_port, source_port);
	for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) {
		if(tcp_cons[i].state && tcp_cons[i].source_port == dest_port && tcp_cons[i].dest_port == source_port && compare_ips(tcp_cons[i].ip, sourceIP)) {
			//printf("found socket w. state %u\r\n", tcp_cons[i].state);
			/*if(flags == 0b10000 && data_len == 0 && ack_nr == tcp_cons[i].tx_seq) {
				//Keepalive packet
				tcp_internal_write(tcp_cons + i, 0, 1, 0, 0, 0, 0);
				return;
			}*/
			switch(tcp_cons[i].state) {
				case 1: //Sent SYN - handshake step
					tcp_cons[i].tx_seq++;
					if((flags & TCP_FLAG_RST) != 0) {
						printf("TCP: Connection refused!\r\n");
						tcp_cons[i].state = 0;
						return;
					}
					if((flags & (TCP_FLAG_SYN | TCP_FLAG_ACK)) != (TCP_FLAG_SYN | TCP_FLAG_ACK) || ack_nr != tcp_cons[i].tx_seq) {
						printf("TCP: Invalid flags for SYN-ACK handshake packet for connection on port %u\r\n", tcp_cons[i].dest_port);
						tcp_internal_write(tcp_cons + i, TCP_FLAG_FIN | TCP_FLAG_ACK, 0, 0); //"Properly" abort the connection attempt by sending FIN-ACK
						tcp_cons[i].state = 0;
						return;
					}
					tcp_cons[i].ack_num = seq_nr + 1;
					tcp_internal_write(tcp_cons + i, TCP_FLAG_ACK, 0, 0);
					tcp_cons[i].state = 4;
					tcp_cons[i].flags |= 2;
					tcp_cons[i].timeout = 255;
					break;
				case 3:
				case 2: //Sent FIN - closing connection
					//In case of either of these two options, either begin the connection timeout or close the socket if both ACK and FIN have been received
					if((flags & TCP_FLAG_FIN) != 0) {
						//Its the FIN from the other end, so acknowledge that and close the socket
						tcp_cons[i].ack_num++;
						tcp_cons[i].tx_seq++;
						tcp_internal_write(tcp_cons + i, TCP_FLAG_ACK, 0, 0);
						tcp_cons[i].state = tcp_cons[i].state == 2 ? 3 : 0;
						tcp_cons[i].timeout = TCP_END_CONNECTION_TIMEOUT;
					}
					if((flags & TCP_FLAG_ACK) != 0) {
						//Its FIN acknowledge - no response
						tcp_cons[i].state = tcp_cons[i].state == 2 ? 3 : 0;
						tcp_cons[i].timeout = TCP_END_CONNECTION_TIMEOUT;
					}
					//if(tcp_cons[i].state == 0) printf("TCP: connection closed normaly\r\n");
					break;
				case 5:
					//Special state to handle incoming connections’s ACK response to SYN-ACK
					if(flags != TCP_FLAG_ACK || seq_nr != tcp_cons[i].ack_num || ack_nr != tcp_cons[i].tx_seq) {
						printf("TCP: Invalid response to SYN-ACK on port %u\r\n", tcp_cons[i].dest_port);
						tcp_internal_write(tcp_cons + i, TCP_FLAG_FIN | TCP_FLAG_ACK, 0, 0);
						tcp_cons[i].state = 0;
						return;
					}
					tcp_cons[i].state = 4; //We’re good to go!
					tcp_cons[i].timeout = 255;
					break;
				case 4:
				default:
					if((flags & TCP_FLAG_ACK) != 0) {
						//TODO: check this also
					}
					if(data_len) {
						//Regular data packet
						if(window > TCP_MAX_WINDOW_SIZE) tcp_cons[i].tx_window = TCP_MAX_WINDOW_SIZE;
						else tcp_cons[i].tx_window = window;
						if(seq_nr - tcp_cons[i].ack_num) {
							//TODO: check this
						}
						tcp_cons[i].ack_num += data_len;

						tcp_internal_write(tcp_cons + i, TCP_FLAG_ACK, 0, 0); //First, acknowledge
						if(tcp_cons[i].remaining + data_len > TCP_MAX_BUFFER) {
							data_len = TCP_MAX_BUFFER - tcp_cons[i].remaining;
							tcp_cons[i].flags |= 1; //Set buffer overflow flag
						}
						volatile uint8_t* dest = tcp_cons[i].buffer;
						uint16_t ctr = data_len;
						while(ctr) {
							dest[tcp_cons[i].write_ptr++] = *data++;
							ctr--;
							tcp_cons[i].write_ptr %= TCP_MAX_BUFFER;
						}
						tcp_cons[i].remaining += data_len;
					}
					if((flags & TCP_FLAG_FIN) != 0) {
						//FIN received
						tcp_cons[i].ack_num++;
						tcp_internal_write(tcp_cons + i, TCP_FLAG_ACK | TCP_FLAG_FIN, 0, 0); //Then, transmit corresponding FIN
						//Give a chance to receive corresponding ACK
						tcp_cons[i].state = 3;
						tcp_cons[i].timeout = TCP_END_CONNECTION_TIMEOUT;
					}
					break;
			}
			return;
		}
	}
	//Not found
	if((flags & TCP_FLAG_SYN) != 0) {
		//SYN - someone’s trying to connect
#ifdef TCP_ALLOW_INCOMING
		uint16_t freeidx = 0xFFFF;
		if(dest_port != 8088) goto tcp_reject_connection;
		for(uint16_t i = 0; i < TCP_MAX_CONNECTIONS; i++) {
			if(pending_cons[i].dest_port == 0 || pending_cons[i].source_port == 0) {
				freeidx = i;
				continue;
			}
			if(pending_cons[i].source_port == source_port && pending_cons[i].dest_port == dest_port && compare_ips(sourceIP, pending_cons[i].sourceIP)) return; //This connection is already pending - possible re-transmit of previous SYNC
		}
		if(freeidx == 0xFFFF) {
			printf("TCP: Can’t buffer and more incoming connections! Rejecting the one from ");
			debug_print_IP(sourceIP);
			putchar(13); putchar(10);
			goto tcp_reject_connection;
		}
		pending_cons[freeidx].dest_port = dest_port;
		pending_cons[freeidx].source_port = source_port;
		pending_cons[freeidx].sourceIP = sourceIP;
		pending_cons[freeidx].ack_nr = seq_nr + 1;
		return;
#endif
tcp_reject_connection:
		volatile TCPSocket tempSocket;
		tempSocket.ack_num = seq_nr;
		tempSocket.tx_seq = rng_next();
		tempSocket.ip = sourceIP;
		tempSocket.source_port = dest_port;
		tempSocket.dest_port = source_port;
		tempSocket.tx_window = TCP_MAX_WINDOW_SIZE;
		tcp_internal_write(&tempSocket, TCP_FLAG_ACK | TCP_FLAG_RST, 0, 0);
	}
}
