#include <stdint.h>

#include "tholinstd.h"
#include "iputils.h"
#include "ethernet.h"

static const char mac_hexchars[]  __attribute__ ((aligned (4))) = "0123456789ABCDEF";
static const char ipv6_hexchars[]  __attribute__ ((aligned (4))) = "0123456789abcdef";

void iputils_puthex8(uint8_t val) {
	putchar(mac_hexchars[(val >> 4) & 0xF]); putchar(mac_hexchars[val & 0xF]);
}

void iputils_puthex16(uint16_t val) {
	putchar(mac_hexchars[(val >> 12) & 0xF]); putchar(mac_hexchars[(val >> 8) & 0xF]);
	putchar(mac_hexchars[(val >> 4) & 0xF]); putchar(mac_hexchars[val & 0xF]);
}

void iputils_ipv6_puthex16(uint16_t val) {
	if((val >> 12) != 0) putchar(ipv6_hexchars[(val >> 12) & 0xF]);
	if((val >> 8) != 0) putchar(ipv6_hexchars[(val >> 8) & 0xF]);
	if((val >> 4) != 0) putchar(ipv6_hexchars[(val >> 4) & 0xF]);
	putchar(ipv6_hexchars[val & 0xF]);
}

void put_uint16(uint8_t* buff, uint16_t val) {
	buff[0] = val >> 8;
	buff[1] = val;
}

void put_uint32(uint8_t* buff, uint32_t val) {
	buff[0] = val >> 24;
	buff[1] = val >> 16;
	buff[2] = val >> 8;
	buff[3] = val;
}

void put_ipv6(uint8_t* buff, IPAddr val) {
	if(val.def_ipv6) {
		for(uint8_t i = 0; i < 16; i++) {
			*buff++ = val.ipv6[i];
		}
	}else {
		for(uint8_t i = 0; i < 16; i++) {
			*buff++ = 0;
		}
	}
}

void debug_print_MAC(uint8_t* mac) {
	uint8_t val;
	for(uint8_t i = 0; i < MAC_LENGTH; i++) {
		iputils_puthex8(mac[i]);
		if(i != MAC_LENGTH - 1) putchar('-');
	}
}

void debug_print_IPv4(uint32_t ip) {
	uint8_t* p = (uint8_t*)(&ip);
	printf("%u.%u.%u.%u", p[3], p[2], p[1], p[0]);
}

void debug_print_IPv6(IPAddr ip) {
	putchar('[');
	uint8_t consecutive = 0;
	for(uint8_t i = 0; i < 16; i += 2) {
		uint16_t a = ip.ipv6[i];
		a <<= 8;
		a |= ip.ipv6[i + 1];
		if(a != 0) {
			iputils_ipv6_puthex16(a);
			consecutive = 0;
		}
		if(i != 14) {
			consecutive++;
			if(consecutive <= 2) putchar(':');
		}
	}
	putchar(']');
}

void debug_print_IP(IPAddr ip) {
	if(ip.type == 2) {
		if(ip.def_ipv4 || !ip.def_ipv6) debug_print_IPv4(ip.ipv4);
		if(ip.def_ipv6) {
			if(ip.def_ipv4) {
				putchar(' ');
				putchar('(');
			}
			debug_print_IPv6(ip);
			if(ip.def_ipv4) putchar(')');
		}
	}else if(ip.type) debug_print_IPv6(ip);
	else debug_print_IPv4(ip.ipv4);
}

IPAddr ipv4(uint32_t ip) {
	IPAddr res;
	res.type = 0;
	res.def_ipv4 = 1;
	res.def_ipv6 = 0;
	res.ipv4 = ip;
	return res;
}

IPAddr ipv4_parts(uint8_t a, uint8_t b, uint8_t c, uint8_t d) {
	IPAddr res;
	res.type = 0;
	res.def_ipv4 = 1;
	res.def_ipv6 = 0;
	res.ipv4 = a;
	res.ipv4 <<= 8;
	res.ipv4 |= b;
	res.ipv4 <<= 8;
	res.ipv4 |= c;
	res.ipv4 <<= 8;
	res.ipv4 |= d;
	return res;
}

IPAddr ipv6(uint8_t* ip) {
	IPAddr res;
	res.type = 1;
	res.def_ipv6 = 1;
	res.def_ipv4 = 0;
	for(uint8_t i = 0; i < 16; i++) res.ipv6[i] = ip[i];
	return res;
}

IPAddr ipv6_parts(uint16_t a, uint16_t b, uint16_t c, uint16_t d, uint16_t e, uint16_t f, uint16_t g, uint16_t h) {
	uint8_t bytes[16];
	bytes[0] = a >> 8;
	bytes[1] = a;
	bytes[2] = b >> 8;
	bytes[3] = b;
	bytes[4] = c >> 8;
	bytes[5] = c;
	bytes[6] = d >> 8;
	bytes[7] = d;
	bytes[8] = e >> 8;
	bytes[9] = e;
	bytes[10] = f >> 8;
	bytes[11] = f;
	bytes[12] = g >> 8;
	bytes[13] = g;
	bytes[14] = h >> 8;
	bytes[15] = h;
	return ipv6(bytes);
}

uint8_t compare_ips(IPAddr a, IPAddr b) {
	if(a.type != 2 && b.type != 2 && a.type != b.type) return 0;
	uint8_t comparison_type = a.type == 2 ? b.type : a.type;
	uint8_t bothv6 = a.def_ipv6 && b.def_ipv6;
	uint8_t bothv4 = a.def_ipv4 && b.def_ipv4;
	if(!(bothv4 || bothv6)) return 0;
	if(comparison_type == 0 && !a.def_ipv4) return 0;
	if(comparison_type == 1 && !a.def_ipv6) return 0;
	
	uint8_t match = 0;
	if(comparison_type == 0 || (comparison_type == 2 && bothv4)) {
		match |= a.ipv4 == b.ipv4;
	}
	if(comparison_type == 1 || (comparison_type == 2 && bothv6)) {
		uint8_t v6match = 1;
		for(uint8_t i = 0; i < 16; i++) if(a.ipv6[i] != b.ipv6[i]) {
			v6match = 0;
			break;
		}
		match |= v6match;
	}
	return match;
}

uint8_t is_ndp_ip(IPAddr a) {
	if(a.type == 0 || !a.def_ipv6) return 0;
	uint8_t ip_match = a.ipv6[0] == 0xff;
	ip_match = ip_match && a.ipv6[1] == 0x02;
	ip_match = ip_match && a.ipv6[2] == 0x00;
	ip_match = ip_match && a.ipv6[3] == 0x00;
	ip_match = ip_match && a.ipv6[4] == 0x00;
	ip_match = ip_match && a.ipv6[5] == 0x00;
	ip_match = ip_match && a.ipv6[6] == 0x00;
	ip_match = ip_match && a.ipv6[7] == 0x00;
	ip_match = ip_match && a.ipv6[8] == 0x00;
	ip_match = ip_match && a.ipv6[9] == 0x00;
	ip_match = ip_match && a.ipv6[10] == 0x00;
	ip_match = ip_match && a.ipv6[11] == 0x01;
	ip_match = ip_match && a.ipv6[12] == 0xff;
	return ip_match;
}

uint8_t is_icmpcast_ip(IPAddr a) {
	if(a.type == 0 || !a.def_ipv6) return 0;
	uint8_t ip_match = a.ipv6[0] == 0xff;
	ip_match = ip_match && a.ipv6[1] == 0x02;
	ip_match = ip_match && a.ipv6[2] == 0x00;
	ip_match = ip_match && a.ipv6[3] == 0x00;
	ip_match = ip_match && a.ipv6[4] == 0x00;
	ip_match = ip_match && a.ipv6[5] == 0x00;
	ip_match = ip_match && a.ipv6[6] == 0x00;
	ip_match = ip_match && a.ipv6[7] == 0x00;
	ip_match = ip_match && a.ipv6[8] == 0x00;
	ip_match = ip_match && a.ipv6[9] == 0x00;
	ip_match = ip_match && a.ipv6[10] == 0x00;
	ip_match = ip_match && a.ipv6[11] == 0x00;
	ip_match = ip_match && a.ipv6[12] == 0x00;
	ip_match = ip_match && a.ipv6[13] == 0x00;
	ip_match = ip_match && a.ipv6[14] == 0x00;
	ip_match = ip_match && a.ipv6[15] == 0x02;
	return ip_match;
}

IPAddr get_ndp_ip_base(void) {
	IPAddr a;
	a.def_ipv4 = 0;
	a.def_ipv6 = 1;
	a.type = 1;
	a.ipv6[0] = 0xff;
	a.ipv6[1] = 0x02;
	a.ipv6[2] = 0x00;
	a.ipv6[3] = 0x00;
	a.ipv6[4] = 0x00;
	a.ipv6[5] = 0x00;
	a.ipv6[6] = 0x00;
	a.ipv6[7] = 0x00;
	a.ipv6[8] = 0x00;
	a.ipv6[9] = 0x00;
	a.ipv6[10] = 0x00;
	a.ipv6[11] = 0x01;
	a.ipv6[12] = 0xff;
	return a;
}

uint8_t is_broadcast_addr(IPAddr a) {
	if(!a.type) {
		if(!a.def_ipv4) return 0;
		return a.ipv4 == 0;
	}
	return 0;
}

IPAddr get_broadcast_addr(uint8_t type) {
	IPAddr res;
	res.type = type;
	res.def_ipv4 = 0;
	res.def_ipv6 = 0;
	if(type == 0 || type == 2) {
		res.def_ipv4 = 1;
		res.ipv4 = 0;
	}
	if(type == 1 || type == 2) {
		res.def_ipv6 = 1;
		for(uint8_t i = 0; i < 16; i++) res.ipv6[i] = 0;
	}
	return res;
}

uint8_t is_local_addr(IPAddr a) {
	if(a.type) {
		if((a.ipv6[0] >> 4) != 0xf) return 0;
	}else {
		if((a.ipv4 >> 16) != ((192 << 8) | 168)) return 0;
	}
	return 1;
}

uint32_t ip_calc_checksum_partial(uint8_t* buffer, uint16_t len, uint32_t start_val) {
	uint8_t datah, datal;
	while(len > 1) {
		datah = *buffer++;
		datal = *buffer++;
		start_val += ((uint16_t)datah << 8) | datal;
		len -= 2;
	}
	
	if(len) {
		datah = *buffer;
		start_val += (uint16_t)datah << 8;
	}
	return start_val;
}

uint16_t ip_calc_checksum(uint8_t* buffer, uint16_t len, uint32_t start_val) {
	start_val = ip_calc_checksum_partial(buffer, len, start_val);
	
	while((start_val & 0xFFFF0000) != 0) start_val = (start_val & 0x0000FFFF) + ((start_val & 0xFFFF0000) >> 16);
	
	return ~(start_val & 0x0000FFFF);
}
