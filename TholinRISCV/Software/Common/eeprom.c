#include <stdint.h>

#include "i2c.h"
#include "eeprom.h"

uint8_t eeprom_read(uint8_t *buff, uint16_t addr, uint16_t len) {
	i2c_begin();
	uint8_t ack = i2c_transfer(EEPROM_ADDRESS);
	if(ack != ACK) goto read_err;
	ack = i2c_transfer((addr >> 8) & 0x0F);
	if(ack != ACK) goto read_err;
	ack = i2c_transfer(addr & 0xFF);
	if(ack != ACK) goto read_err;
	i2c_restart();
	ack = i2c_transfer(EEPROM_ADDRESS|1);
	if(ack != ACK) goto read_err;
	
	for(uint16_t i = 0; i < len; i++) {
		buff[i] = i2c_receive(i == len - 1 ? NACK : ACK);
	}

	i2c_end();
	return 0;
read_err:
	i2c_end();
	return 1;
}

uint8_t eeprom_write(uint8_t *buff, uint16_t addr, uint16_t len) {
	uint8_t ack;
	uint16_t timeout;
	uint16_t i = 0;
	while(1) {
		ack = NACK;
		timeout = 1;
		while(ack == NACK && timeout != 0) {
			timeout++;
			i2c_begin();
			ack = i2c_transfer(EEPROM_ADDRESS);
			if(ack == ACK) break;
			i2c_end();
			for(int j = 0; j < 8; j++) asm volatile("nop");
		}
		if(timeout == 0) return 1;
		if(len == 0) {
			i2c_end();
			break;
		}
		ack = i2c_transfer((addr >> 8) & 0x0F);
		if(ack != ACK) goto write_err;
		ack = i2c_transfer(addr & 0xFF);
		if(ack != ACK) goto write_err;
		do {
			ack = i2c_transfer(buff[i++]);
			if(ack != ACK) goto write_err;
			addr++;
			len--;
			if(len == 0) break;
		}while((addr & 31) != 0);
		i2c_end();
	}
	return 0;
write_err:
	i2c_end();
	return 1;
}
