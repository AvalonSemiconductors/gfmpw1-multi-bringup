#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "udp.h"
#include "ip.h"
#include "phy.h"
#ifdef DEBUG_UDP
#include "tholinstd.h"
#endif

static volatile UDPSocket udp_sockets[UDP_MAX_SOCKETS] __attribute__ ((aligned (4)));

#ifdef DEBUG_UDP
void print_udp_header(UDPHeader *hdr) {
	puts("---- UDP ----\r\n");
	printf("Source port: %u\r\nDestination port: %u\r\n Length: %u\r\nChecksum: %x\r\n", hdr->source_port, hdr->dest_port, hdr->length, hdr->checksum);
	puts("------------\r\n\r\n");
}
#endif

void udp_reset(void) {
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		udp_sockets[i].port = 0;
	}
}

uint8_t* udp_tx_header(uint16_t data_len, IPAddr dest, uint16_t src_port, uint16_t dest_port) {
	uint8_t* p = ip_tx_header(data_len + UDP_HEADER_LENGTH, IP_PROTOCOL_UDP, dest);
	put_uint16(p, src_port);
	p += 2;
	put_uint16(p, dest_port);
	p += 2;
	put_uint16(p, data_len + UDP_HEADER_LENGTH);
	p += 2;
	p[0] = p[1] = 0; //Checksum zero at first
	return p + 2;
}

void udp_checksum(uint8_t* p, uint16_t data_len, IPAddr dest) {
	if(dest.type == 0) return; //TODO
	uint8_t pseudo_header[40];
	uint8_t* a = p - UDP_HEADER_LENGTH - 32;
	for(uint8_t i = 0; i < 32; i++) pseudo_header[i] = a[i];
	put_uint32(pseudo_header + 32, data_len + UDP_HEADER_LENGTH);
	pseudo_header[36] = pseudo_header[37] = pseudo_header[38] = 0x00;
	pseudo_header[39] = 17;
	uint32_t partial = ip_calc_checksum_partial(pseudo_header, 40, 0);
	put_uint16(p - 2, ip_calc_checksum(p - UDP_HEADER_LENGTH, data_len + UDP_HEADER_LENGTH, partial));
}

void udp_parse_incoming(uint8_t* p) {
	UDPHeader hdr;
	hdr.source_port = EXTRACT_UINT16(p);
	p += 2;
	hdr.dest_port = EXTRACT_UINT16(p);
	p += 2;
	hdr.length = EXTRACT_UINT16(p);
	p += 2;
	hdr.checksum = EXTRACT_UINT16(p);
	p += 2;
	//p now points to data
#ifdef DEBUG_UDP
	print_udp_header(&hdr);
#endif
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port != 0 && udp_sockets[i].port == hdr.dest_port) {
			uint16_t to_write = hdr.length - UDP_HEADER_LENGTH;
			if(udp_sockets[i].remaining + to_write > UDP_MAX_BUFFER) {
				to_write = UDP_MAX_BUFFER - udp_sockets[i].remaining;
				udp_sockets[i].flags |= 1;
			}
			if(to_write == 0) continue;
			volatile uint8_t* dest = udp_sockets[i].buffer;
			uint8_t* src = p;
			uint16_t ctr = to_write;
			while(ctr) {
				dest[udp_sockets[i].write_ptr++] = *src++;
				ctr--;
				udp_sockets[i].write_ptr %= UDP_MAX_BUFFER;
			}
			udp_sockets[i].remaining += to_write;
		}
	}
}

uint8_t udp_open_port(uint16_t port) {
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port != 0) continue;
		udp_sockets[i].remaining = 0;
		udp_sockets[i].flags = 0;
		udp_sockets[i].read_ptr = 0;
		udp_sockets[i].write_ptr = 0;
		udp_sockets[i].port = port;
		return 0;
	}
	return 1;
}

void udp_close_port(uint16_t port) {
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port == port) udp_sockets[i].port = 0;
	}
}

uint16_t udp_available(uint16_t port) {
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port != 0 && udp_sockets[i].port == port) {
			return udp_sockets[i].remaining;
		}
	}
	return 0;
}

uint16_t udp_read(uint16_t port, uint8_t* buff, uint16_t len) {
	if(len == 0) return 0;
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port != 0 && udp_sockets[i].port == port) {
			phy_pause_interrupts();
			uint16_t to_read = len;
			uint16_t remaining = udp_sockets[i].remaining;
			if(to_read > remaining) to_read = remaining;
			volatile uint8_t* src = udp_sockets[i].buffer;
			uint16_t ctr = to_read;
			while(ctr) {
				*buff++ = src[udp_sockets[i].read_ptr++];
				//udp_sockets[i].remaining--;
				ctr--;
				udp_sockets[i].read_ptr %= UDP_MAX_BUFFER;
			}
			udp_sockets[i].remaining -= to_read;
			phy_unpause_interrupts();
			return to_read;
		}
	}
	return 0;
}

uint16_t udp_skip(uint16_t port, uint16_t skip_amt) {
	if(skip_amt == 0) return 0;
	for(uint16_t i = 0; i < UDP_MAX_SOCKETS; i++) {
		if(udp_sockets[i].port != 0 && udp_sockets[i].port == port) {
			phy_pause_interrupts();
			uint16_t to_skip = skip_amt;
			uint16_t remaining = udp_sockets[i].remaining;
			if(to_skip > remaining) to_skip = remaining;
			uint32_t temp = udp_sockets[i].read_ptr;
			temp += to_skip;
			temp %= UDP_MAX_BUFFER;
			udp_sockets[i].read_ptr = (uint16_t)temp;
			udp_sockets[i].remaining -= to_skip;
			phy_unpause_interrupts();
			return to_skip;
		}
	}
	return 0;
}

uint16_t udp_write(uint16_t port, IPAddr ip, const uint8_t* buff, uint16_t len) {
	if(len == 0) return 0;
	const uint16_t max_tx = 1024;
	uint16_t written = 0;
	while(len) {
		uint16_t to_write = len;
		if(to_write > max_tx) to_write = max_tx;
		uint8_t* p = udp_tx_header(to_write, ip, (port == 67 && !ip.type) ? 68 : ((port == 547 && ip.type) ? 546 : port), port);
		uint8_t* orig = p;
		uint16_t i = to_write;
		while(i) {
			*p++ = *buff++;
			i--;
		}
		udp_checksum(orig, to_write, ip);
		if(ip.type) ipv6_tx(to_write + UDP_HEADER_LENGTH);
		else ip_tx(to_write + UDP_HEADER_LENGTH);
		len -= to_write;
		written += to_write;
	}
	return written;
}
