#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "udp.h"
#include "xorshift.h"
#include "delay.h"
#include "dns.h"

#define DNS_PORT 53

#define DNS_QUESTION_TYPE_A 1
#define DNS_QUESTION_TYPE_AAAA 28

uint16_t insert_question(uint8_t* buff, const char* hostname, uint16_t type) {
	uint16_t pos = 0;
	buff[0] = '.';
	while(1) {
		buff[pos + 1] = hostname[pos];
		if(hostname[pos] == 0) break;
		pos++;
	}
	uint8_t count = 0;
	for(uint16_t i = pos; i != 0xFFFF; i--) {
		if(buff[i] == '.') {
			buff[i] = count;
			count = 0;
		}else count++;
	}
	pos += 2;
	put_uint16(buff + pos, type);
	put_uint16(buff + pos + 2, 1);
	return pos + 4;
}

uint8_t dns_query(const char *hostname, IPAddr *res, uint8_t ipv6) {
	res->def_ipv4 = 0;
	res->def_ipv6 = 0;
	res->type = 0;
	uint8_t retval = 0;
	
	uint32_t strlen = 0;
	{
		const char *testptr = hostname;
		char last_char = 0;
		while(*testptr) {
			if(last_char == '.' && *testptr == '.') {
				retval = 9;
				goto dns_final;
			}
			last_char = *testptr;
			testptr++;
			strlen++;
		}
		if(strlen > 220) {
			retval = 2;
			goto dns_final;
		}
	}
	
	udp_open_port(DNS_PORT);
	uint8_t databuff[512];
	uint8_t tries = 3;
	while(--tries) {
		databuff[0] = rng_next();
		databuff[1] = rng_next();
		databuff[2] = 0b00000000;
		databuff[3] = 0b00000000;
		put_uint16(databuff + 4, 1);
		put_uint16(databuff + 6, 0);
		put_uint16(databuff + 8, 0);
		put_uint16(databuff + 10, 0);
		uint8_t pos = 12;
		pos += insert_question(databuff + pos, hostname, ipv6 ? DNS_QUESTION_TYPE_AAAA : DNS_QUESTION_TYPE_A);
		udp_skip(DNS_PORT, 0xFFFF);
		udp_write(DNS_PORT, dns_ip, databuff, pos);
		delay_s(1);
		if(udp_available(DNS_PORT)) break;
	}
	if(tries == 0) {
		retval = 1;
		goto dns_final;
	}
	
	for(uint16_t i = 0; i < 512; i++) databuff[i] = 0;
	uint16_t read = udp_read(DNS_PORT, databuff, 511);
	udp_close_port(DNS_PORT);
	uint16_t flags = databuff[2];
	if((flags & 0x80) != 0x80) { //Check QR flag, must be a reply
		retval = 3;
		goto dns_final;
	}
	flags = databuff[3];
	if((flags & 0x0F) != 0) { //Check RCODE, must be no error
		retval = 0x10 + (flags & 0x0F);
		goto dns_final;
	}
	flags = EXTRACT_UINT16(databuff + 6);
	if(flags == 0) { //Check number of answers, must be at least one
		retval = 6;
		goto dns_final;
	}
	
	flags = EXTRACT_UINT16(databuff + 4);
	uint8_t *rpos = databuff + 12;
	uint16_t total_read = 12;
	if(flags != 0) { //Check number of questions, and skip them
		for(uint32_t i = 0; i < flags; i++) {
			while(1) {
				uint8_t len = *rpos;
				rpos += len + 1;
				total_read += len + 1;
				if(len == 0) break;
			}
			rpos += 4;
			total_read += 4;
		}
	}
	
	uint8_t found = 0;
	while(1) {
		if(total_read >= read) {
			retval = found ? 0 : 7;
			goto dns_final;
		}
		flags = 0;
		uint8_t matches = 1;
		uint8_t* comp_ptr = rpos;
		uint8_t mode = 1;
		if(*rpos == 0xC0) {
			comp_ptr = databuff + rpos[1];
			mode = 0;
			rpos += 2;
			total_read += 2;
		}
		while(1) {
			uint8_t ch = *comp_ptr;
			if(flags > 1 && ch != hostname[flags - 1] && hostname[flags - 1] != '.') matches = 0;
			comp_ptr++;
			if(mode) {
				rpos++;
				total_read++;
			}
			if(ch == 0) break;
			if(matches) flags++;
		}
		flags = EXTRACT_UINT16(rpos + 8);
		uint16_t type = EXTRACT_UINT16(rpos);
		uint8_t* data = rpos + 10;
		rpos += 10 + flags;
		total_read += 10 + flags;
		if(!matches || (flags != 4 && flags != 16)) continue;
		if(flags == 4 && res->def_ipv4 == 0 && type == DNS_QUESTION_TYPE_A) { //IPv4
			res->def_ipv4 = 1;
			res->ipv4 = EXTRACT_UINT32(data);
			found = 1;
		}else if(flags == 16 && res->def_ipv6 == 0 && type == DNS_QUESTION_TYPE_AAAA) { //IPv6
			res->def_ipv6 = 1;
			res->type = 1;
			for(uint8_t i = 0; i < 16; i++) res->ipv6[i] = *data++;
			found = 1;
		}
	}
	
dns_final:
	udp_close_port(DNS_PORT);
	return retval;
}
