#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

#include "io.h"
#include "ethernet.h"
#include "arp.h"
#include "tholinstd.h"
#include "i2c.h"
#include "eeprom.h"
#include "rtc.h"
#include "sdcard.h"
#include "xorshift.h"

int putchar(int c) {
	while((reg_stat & 2) != 0) {}
	reg_udr = c;
	return c;
}

#define UART_BUFF_LEN 64

volatile uint8_t uart_buff[UART_BUFF_LEN];
volatile uint32_t uart_rptr = 0;
volatile uint32_t uart_wptr = 0;
volatile uint32_t int_count = 0;

void isr() {
	rng_next();
	if(reg_inum == 2) {
		reg_tmr1 = 0;
		reg_intclr = 0;
		reg_porta = reg_porta ^ 0b100000;
		int_count++;
		eth_update();
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

void long_del(uint32_t seconds) {
	seconds *= 4;
	uint32_t int_count_orig = int_count;
	while(int_count - int_count_orig < seconds) { asm volatile("nop"); }
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
	reg_ttop1 = 250;
	reg_tmr1 = 0;
	reg_ien = 0b110;
	
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
		uint8_t sd_ret = sd_init();
		if(sd_ret) while(1);
		eth_reset();
	}
	
	asm volatile(".word 0x00700073"); //sei
	long_del(3);
	
	uint32_t router_ip = (192 << 24) | (168 << 16) | (2 << 8) | 32;
	arp_request(router_ip);

	while(1) {
		long_del(5);
		uint8_t* a = arp_lookup(router_ip);
		//if(a) debug_print_MAC(a);
		//else puts("NULL\r\n");
	}
}
