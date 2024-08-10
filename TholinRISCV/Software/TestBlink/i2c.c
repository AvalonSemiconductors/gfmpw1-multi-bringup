#include <stdint.h>

#include "io.h"
#include "i2c.h"

void i2c_setup(void) {
	reg_ddra &= ~(BIT_SCL | BIT_SDA);
	reg_porta &= ~(BIT_SCL | BIT_SDA);
}

void i2c_delay(void) {
	for(int i = 0; i < 90; i++) asm volatile("nop");
}

void i2c_begin(void) {
	reg_porta &= ~(BIT_SCL | BIT_SDA);
	reg_ddra |= BIT_SDA;
	i2c_delay();
	reg_ddra |= BIT_SCL;
	i2c_delay();
}

void i2c_end(void) {
	reg_ddra |= BIT_SDA;
	reg_ddra &= ~BIT_SCL;
	i2c_delay();
	reg_ddra &= ~BIT_SDA;
	i2c_delay();
}

void i2c_restart(void) {
	reg_ddra |= BIT_SDA;
	reg_ddra &= ~BIT_SCL;
	i2c_delay();
	reg_ddra &= ~BIT_SDA;
	i2c_delay();
	reg_ddra |= BIT_SDA;
	i2c_delay();
	reg_ddra |= BIT_SCL;
	i2c_delay();
}

uint8_t i2c_transfer(uint8_t data) {
	reg_ddra |= BIT_SCL | BIT_SDA;
	i2c_delay();
	for(int i = 0; i < 8; i++) {
		if((data & 128) == 0) reg_ddra |= BIT_SDA;
		else reg_ddra &= ~BIT_SDA;
		i2c_delay();
		reg_ddra &= ~BIT_SCL;
		i2c_delay();
		reg_ddra |= BIT_SCL;
		i2c_delay();
		data <<= 1;
	}
	reg_ddra &= ~BIT_SDA;
	i2c_delay();
	reg_ddra &= ~BIT_SCL;
	i2c_delay();
	uint8_t res = ACK;
	if((reg_pina & BIT_SDA) != 0) res = NACK;
	reg_ddra |= BIT_SCL | BIT_SDA;
	i2c_delay();
	return res;
}

uint8_t i2c_receive(uint8_t ack) {
	reg_ddra &= ~BIT_SDA;
	reg_ddra |= BIT_SCL;
	uint8_t res = 0;
	for(int i = 0; i < 8; i++) {
		res <<= 1;
		reg_ddra &= ~BIT_SCL;
		i2c_delay();
		if((reg_pina & BIT_SDA) != 0) res |= 1;
		reg_ddra |= BIT_SCL;
		i2c_delay();
	}
	if(ack == ACK) reg_ddra |= BIT_SDA;
	i2c_delay();
	reg_ddra &= ~BIT_SCL;
	i2c_delay();
	reg_ddra |= BIT_SCL;
	i2c_delay();
	reg_ddra |= BIT_SDA;
	return res;
}
