#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

#include "io.h"
#include "tholinstd.h"
#include "i2c.h"
#include "eeprom.h"
#include "rtc.h"

int putchar(int c) {
	while((reg_stat & 2) != 0) {}
	reg_udr = c;
	return 0;
}

float absd(float x) {
	if(x < 0) return -x;
	return x;
}

void isr() {
	reg_tmr1 = 0;
	reg_intclr = 0;
	reg_porta = reg_porta ^ 0b100000;
}

#define F_CLK 15000000

void main(void) {
	reg_udiv = F_CLK / 38400 - 1;
	reg_ddra = 0b110001;
	reg_porta = 0b010001;
	i2c_setup();
	
	reg_tdiv0 = F_CLK/10000;
	reg_ttop0 = 0xFFFFFFFF;
	reg_tmr0 = 0;
	
	reg_tdiv1 = F_CLK/1000;
	reg_ttop1 = 500;
	reg_tmr1 = 0;
	reg_ien = 0b010;
	asm volatile(".word 0x00700073"); //sei
	
	puts("Hello from Tholin’s RISC-V Core!\r\n");
	uint32_t a = reg_chirp1;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	putchar((a >> 16) & 0xFF);
	putchar((a >> 24) & 0xFF);
	a = reg_chirp2;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	puts("\r\n");
	
	{
		uint8_t test_arr[256];
		uint8_t* src = (uint8_t*)0x00000000;
		for(int i = 0; i < 256; i++) test_arr[i] = src[i];
		eeprom_write(test_arr, 0, 256);
		for(int i = 0; i < 256; i++) test_arr[i] = 0;
		eeprom_read(test_arr, 0, 256);
		for(int i = 0; i < 256; i+=4) {
			uint32_t x = test_arr[i];
			x |= (uint32_t)test_arr[i+1] << 8;
			x |= (uint32_t)test_arr[i+2] << 16;
			x |= (uint32_t)test_arr[i+3] << 24;
			printf("%x ", x);
			if(((i+1) & 31) == 0) puts("\r\n");
		}
	}
	
	struct Datetime time;
	/*time.second = 1;
	time.minute = 9;
	time.hour = 20;
	time.date = 7;
	time.month = 8;
	time.day = WEDNESDAY;
	time.year = 2024;
	
	rtc_configure();
	rtc_set_time(&time);*/
	
	/*uint32_t last_t = reg_tmr0;
	while(1) {
		if(reg_tmr0 != last_t) {
			last_t = reg_tmr0;
			reg_porta = reg_porta ^ 0b100000;
		}
	}*/
	while(1) {
		if(reg_tmr0 >= 5000) {
			reg_tmr0 = 0;
			uint8_t ack = rtc_get_time(&time);
			if(ack) puts("RTC read error\r\n");
			else {
				rtc_time_print(&time);
			}
		}
	}
}
