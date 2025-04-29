#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

#include "io.h"
#include "tholinstd.h"
#include "i2c.h"
#include "eeprom.h"
#include "rtc.h"
#include "sdcard.h"

int putchar(int c) {
	while((reg_stat & 2) != 0) {}
	reg_udr = c;
	return 0;
}

float absd(float x) {
	if(x < 0) return -x;
	return x;
}

#define UART_BUFF_LEN 64

volatile uint8_t uart_buff[UART_BUFF_LEN];
volatile uint32_t uart_rptr = 0;
volatile uint32_t uart_wptr = 0;
volatile uint32_t int_count = 0;

void isr() {
	if(reg_inum == 2) {
		reg_tmr1 = 0;
		reg_intclr = 0;
		reg_porta = reg_porta ^ 0b100000;
		int_count++;
		return;
	}
	if(reg_inum == 3) {
		//UART interrupt
		uint8_t rec_val = reg_udr;
		reg_stat = 0; //to clear UHB
		uart_buff[uart_wptr++] = rec_val;
		if(uart_wptr >= UART_BUFF_LEN) uart_wptr = 0;
		return;
	}
}

void long_del(uint32_t halfseconds) {
	uint32_t int_count_orig = int_count;
	while(int_count - int_count_orig < halfseconds) { asm volatile("nop"); }
}

uint16_t uart_next() {
	if(uart_rptr == uart_wptr) return 0xFFFF;
	uint8_t res = uart_buff[uart_rptr++];
	if(uart_rptr >= UART_BUFF_LEN) uart_rptr = 0;
	return res;
}

uint8_t wait_for_char(uint8_t echo) {
	uint16_t ret;
	while(1) {
		ret = uart_next();
		if(ret != 0xFFFF) {
			if(echo) putchar(ret);
			return ret;
		}
	}
}

#define F_CLK 15000000

void main(void) {
	reg_udiv  = F_CLK / 38400 + 1;
	reg_ddra  = 0b110001;
	reg_porta = 0b010001;
	i2c_setup();
	
	reg_tdiv0 = F_CLK/10000;
	reg_ttop0 = 0xFFFFFFFF;
	reg_tmr0 = 0;
	
	reg_tdiv1 = F_CLK/1000;
	reg_ttop1 = 500;
	reg_tmr1 = 0;
	reg_ien = 0b110;
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
	
	/*{
		uint8_t test_arr[256];
		uint8_t* src = (uint8_t*)0x00000000;
		for(int i = 0; i < 256; i++) test_arr[i] = src[i];
		eeprom_write(test_arr, 0, 256);
		for(int i = 0; i < 256; i++) test_arr[i] = 0;
		eeprom_read(test_arr, 0, 256);
		for(int i = 0; i < 256; i+=4) {
			uint32_t x = test_arr[i+3];
			x |= (uint32_t)test_arr[i+2] << 8;
			x |= (uint32_t)test_arr[i+1] << 16;
			x |= (uint32_t)test_arr[i] << 24;
			printf("%x ", x);
			if(((i+4) & 31) == 0) puts("\r\n");
		}
	}*/
	
	long_del(5);
	
	if(uart_next() != 0xFFFF) {
		while(uart_next() != 0xFFFF) { asm volatile("nop"); }
		puts("Hours?\r\n");
		uint8_t h_hi = wait_for_char(1) - '0';
		uint8_t h_lo = wait_for_char(1) - '0';
		puts("\r\nMinutes?\r\n");
		uint8_t m_hi = wait_for_char(1) - '0';
		uint8_t m_lo = wait_for_char(1) - '0';
		puts("\r\nSeconds?\r\n");
		uint8_t s_hi = wait_for_char(1) - '0';
		uint8_t s_lo = wait_for_char(1) - '0';
		puts("\r\nDate?\r\n");
		uint8_t d_hi = wait_for_char(1) - '0';
		uint8_t d_lo = wait_for_char(1) - '0';
		puts("\r\nMonth?\r\n");
		uint8_t mo_hi = wait_for_char(1) - '0';
		uint8_t mo_lo = wait_for_char(1) - '0';
		puts("\r\nDay?\r\n");
		uint8_t day = wait_for_char(1) - '0';
		puts("\r\nYear?\r\n");
		uint8_t y_hi = wait_for_char(1) - '0';
		uint8_t y_lo = wait_for_char(1) - '0';
		puts("\r\n");
		if(h_hi > 9 || h_lo > 9 || m_hi > 9 || m_lo > 9 || s_hi > 9 || s_lo > 9 || d_hi > 9 || d_lo > 9 || mo_hi > 9 || mo_lo > 9 || day > 9 || y_lo > 9 || y_hi > 9) {
			puts("Invalid input: not a number\r\n");
		}else {
			struct Datetime time;
			time.second = s_hi * 10 + s_lo;
			time.minute = m_hi * 10 + m_lo;
			time.hour = h_hi * 10 + h_lo;
			time.date = d_hi * 10 + d_lo;
			time.month = mo_hi * 10 + mo_lo;
			time.year = 2000 + (y_hi * 10 + y_lo);
			time.day = day;
			
			if(time.second >= 60) puts("Invalid input: seconds too large\r\n");
			else if(time.minute >= 60) puts("Invalid input: minutes too large\r\n");
			else if(time.hour >= 24) puts("Invalid input: hours too large\r\n");
			else if(time.month >= 12) puts("Invalid input: month too large\r\n");
			else if(time.date >= 31) puts("Invalid input: date too large\r\n");
			else if(time.day >= 7) puts("Invalid input: day too large\r\n");
			else {
				rtc_configure();
				rtc_set_time(&time);
				rtc_set_time(&time);
			}
		}
	}
	
	{
		uint8_t sd_ret = sd_init();
		if(sd_ret) while(1);
		uint8_t test_arr[512];
		sd_ret = sd_read_block(0, test_arr);
		if(sd_ret) while(1);
		if(test_arr[510] != 0x55 || test_arr[511] != 0xAA) puts("Invalid MBR\r\n");
		for(int i = 0; i < 512; i+=4) {
			uint32_t x = test_arr[i+3];
			x |= (uint32_t)test_arr[i+2] << 8;
			x |= (uint32_t)test_arr[i+1] << 16;
			x |= (uint32_t)test_arr[i] << 24;
			printf("%x ", x);
			if(((i+4) & 31) == 0) puts("\r\n");
		}
		puts("\r\n");
	}
	
	/*uint32_t last_t = reg_tmr0;
	while(1) {
		if(reg_tmr0 != last_t) {
			last_t = reg_tmr0;
			reg_porta = reg_porta ^ 0b100000;
		}
	}*/
	struct Datetime time;
	while(1) {
		uint8_t ack = rtc_get_time(&time);
		if(ack) puts("RTC read error\r\n");
		else {
			rtc_time_print(&time);
		}
		long_del(5);
	}
}
