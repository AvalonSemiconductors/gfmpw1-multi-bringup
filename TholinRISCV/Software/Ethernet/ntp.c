#include <stdint.h>

#include "iputils.h"
#include "ethernet.h"
#include "udp.h"
#include "delay.h"
#include "tholinstd.h"
#include "ntp.h"
#include "rtc.h"

#define NTP_PORT 123

uint8_t ntp_query(const IPAddr ntp_ip, int32_t offset) {
	uint8_t buffer[64];
	for(uint8_t i = 0; i < 64; i++) buffer[i] = 0;
	buffer[0] = (4 << 3) | (3 << 6) | 3;
	buffer[2] = 4;
	buffer[3] = 0xFA;
	udp_open_port(NTP_PORT);
	uint8_t tries;
	for(tries = 0; tries < 3; tries++) {
		udp_skip(NTP_PORT, 0xFFFF);
		udp_write(NTP_PORT, ntp_ip, buffer, 48);
		delay_s(1);
		if(udp_available(NTP_PORT) >= 48) break;
	}
	if(tries == 3) {
		udp_close_port(NTP_PORT);
		return 1;
	}
	uint16_t read = udp_read(NTP_PORT, buffer, 64);
	udp_close_port(NTP_PORT);
	uint32_t time_hi = EXTRACT_UINT32(buffer + 32);
	time_hi -= 2208988800;
	time_hi += offset;
	time_hi++; //Account for delay_s above
	//uint32_t time_lo = EXTRACT_UINT32(buffer + 36);
	if(time_hi < 376598005) return 2;
	struct Datetime datetime;
	datetime.unix_time = time_hi;
	rtc_from_unix(&datetime);
	if(rtc_set_time(&datetime)) return 3;
	if(rtc_get_time(&datetime)) return 4;
	puts("NTP success, time set to ");
	rtc_time_print(&datetime);
	putchar(13); putchar(10);
	return 0;
}
