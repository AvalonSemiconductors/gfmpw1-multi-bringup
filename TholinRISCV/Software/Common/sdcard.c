#include <stdint.h>

#include "sdcard.h"
#include "io.h"
#include "tholinstd.h"

uint32_t sd_num_blocks = 0;

void sd_crc7(uint8_t in, uint8_t* crc) {
	for(uint8_t i = 0; i < 8; i++) {
		*crc <<= 1;
		if((in & 0x80) != (*crc & 0x80)) *crc ^= 0x09;
		in <<= 1;
	}
	*crc &= 0x7F;
}

void sd_cmd(uint8_t cmd, uint32_t arg) {
	//Wait ready
	while(1) {
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
		if(reg_sdr == 255) break;
	}
	
	cmd |= 0x40;
	uint8_t crc = 0;
	sd_crc7(cmd, &crc);
	sd_crc7(arg >> 24, &crc);
	sd_crc7(arg >> 16, &crc);
	sd_crc7(arg >> 8, &crc);
	sd_crc7(arg, &crc);
	crc = (crc << 1) | 1;
	
	reg_sdr = cmd;
	while((reg_stat & 1) != 0) {}
	reg_sdr = arg >> 24;
	while((reg_stat & 1) != 0) {}
	reg_sdr = arg >> 16;
	while((reg_stat & 1) != 0) {}
	reg_sdr = arg >> 8;
	while((reg_stat & 1) != 0) {}
	reg_sdr = arg;
	while((reg_stat & 1) != 0) {}
	reg_sdr = crc;
	while((reg_stat & 1) != 0) {}
}

uint8_t sd_res1() {
	uint8_t res = 0;
	uint8_t timeout = 0;
	while(timeout++ < 202) {
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
		res = reg_sdr;
		if(res != 0xFF) break;
	}
	return timeout > 200 ? 0xFF : res;
}

uint32_t sd_res7() {
	uint32_t res = 0;
	for(uint8_t i = 0; i < 4; i++) {
		res <<= 8;
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
		res |= reg_sdr & 0xFF;
	}
	return res;
}

void sd_sel() {
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
	reg_porta &= ~1;
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
}

void sd_desel() {
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
	reg_porta |= 1;
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
}

uint8_t sd_read_buffer(uint8_t* buff, uint16_t len) {
	uint8_t resp = 0;
	uint16_t tries = 32000;
	do {
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
		resp = reg_sdr;
		if(resp == 0xFE) break;
		if((resp & 0xF0) == 0) {
			sd_desel();
			return 1;
		}
		tries--;
	}while(tries);
	if(!tries) {
		sd_desel();
		return 2;
	}
	
	while(len--) {
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
		*buff = (uint8_t)reg_sdr;
		buff++;
	}
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
	reg_sdr = 255;
	while((reg_stat & 1) != 0) {}
	return 0;
}

uint8_t sd_init() {
	uint8_t res1;
	uint16_t tries;
	reg_sdiv = 255;
	sd_desel();
	for(uint8_t i = 0; i < 10; i++) {
		reg_sdr = 255;
		while((reg_stat & 1) != 0) {}
	}
	puts("SD: CMD0\r\n");
	tries = 500;
	while(1) {
		sd_sel();
		sd_cmd(SD_CMD0, SD_CMD0_ARG);
		res1 = sd_res1();
		sd_desel();
		if(res1 == 0x01) break;
		if(res1 == 0xFF) continue;
		if(res1 > 1) {
			printf("SD CMD0 FAIL %x\r\n", res1);
			goto sd_init_err;
		}
		if(tries-- == 0) {
			printf("SD CMD0 TIMEOUT %x\r\n", res1);
			goto sd_init_err;
		}
	}
	
	puts("SD: CMD8\r\n");
	sd_sel();
	sd_cmd(SD_CMD8, SD_CMD8_ARG);
	res1 = sd_res1();
	if(res1 > 1) {
		puts("SD CMD8 FAIL\r\n");
		goto sd_init_err;
	}
	uint32_t res7 = sd_res7();
	sd_desel();
	if(((res7 >> 8) & 15) != 1 || (res7 & 255) != 0xAA) {
		printf("BAD CMD8 RESPONSE %x\r\n", res7);
		goto sd_init_err;
	}
	
	sd_sel();
	sd_cmd(SD_CMD58, SD_CMD58_ARG);
	res1 = sd_res1();
	if(res1 > 1) goto c58_fail;
	res7 = sd_res7();
	sd_desel();
	if(((res7 >> 15) & 0b001100000) == 0) goto bad_58_res;
	
	puts("SD: ACMD41\r\n");
	tries = 600;
	while(1) {
		sd_sel();
		sd_cmd(SD_CMD55, SD_CMD55_ARG);
		res1 = sd_res1();
		sd_desel();
		sd_sel();
		sd_cmd(SD_ACMD41, SD_ACMD41_ARG);
		res1 = sd_res1();
		sd_desel();
		if(res1 > 1) {
			puts("SD ACMD41 FAIL\r\n");
			goto sd_init_err;
		}
		if(res1 == 0) break;
		if(tries-- == 0) {
			puts("SD ACMD41 TIMEOUT\r\n");
			goto sd_init_err;
		}
	}
	
	sd_sel();
	sd_cmd(SD_CMD58, SD_CMD58_ARG);
	res1 = sd_res1();
	if(res1 > 1) goto c58_fail;
	res7 = sd_res7();
	sd_desel();
	if(((res7 >> 31) & 1) == 0) goto bad_58_res;
	uint8_t cap = (res7 >> 30) & 1;
	if(cap) puts("SD Card type is SDXC or SDHC\r\n");
	
	//TODO: see if we can live without CMD59
	sd_sel();
	sd_cmd(SD_CMD59, SD_CMD59_ARG);
	res1 = sd_res1();
	sd_desel();
	sd_sel();
	sd_cmd(SD_CMD16, SD_CMD16_ARG); //Block length to 512
	res1 |= sd_res1();
	sd_desel();
	if(res1 > 1) {
		puts("SD CMDs 59 / 16 FAIL\r\n");
		goto sd_init_err;
	}
	reg_sdiv = 1;
	
	puts("SD: CMD9\r\n");
	sd_sel();
	sd_cmd(SD_CMD9, SD_CMD9_ARG);
	res1 = sd_res1();
	if(res1 > 1) goto c9_fail;
	uint8_t buff[16];
	res1 = sd_read_buffer(buff, 16);
	if(res1) goto c9_fail;
	sd_desel();
	
	if((buff[0] >> 6) == 1) {
		sd_num_blocks = buff[9] + (buff[8] << 8) + ((buff[7] & 63) << 16) + 1;
		sd_num_blocks <<= 10;
	}else {
		uint32_t n = (buff[5] & 15) + ((buff[10] & 128) >> 7) + ((buff[9] & 3) << 1) + 2;
		sd_num_blocks = (buff[8] >> 6) + (buff[7] << 2) + ((buff[6] & 3) << 10) + 1;
		sd_num_blocks <<= (n - 9);
	}
	
	printf("SD Card capacity %uKiB\r\nSD: Initialized!\r\n", sd_num_blocks>>1);
	
	return 0;
sd_init_err:
	sd_desel();
	return 1;
c58_fail:
	puts("SD CMD58 FAIL\r\n");
	goto sd_init_err;
c9_fail:
	puts("SD CMD9 FAIL\r\n");
	goto sd_init_err;
bad_58_res:
	printf("BAD CMD58 RESPONSE %x\r\n", res7);
	goto sd_init_err;
}

uint8_t sd_read_block(uint32_t addr, uint8_t* buff) {
	sd_sel();
	sd_cmd(SD_CMD17, addr);
	uint8_t res1 = sd_res1();
	if(res1 > 1) {
		sd_desel();
		return 1;
	}
	res1 = sd_read_buffer(buff, 512);
	sd_desel();
	return res1;
}

uint8_t sd_write_block(uint32_t addr, uint8_t* buff) {
	sd_sel();
	sd_cmd(SD_CMD24, addr);
	uint8_t res1 = sd_res1();
	if(res1 > 1) {
		sd_desel();
		return 1;
	}
	reg_sdr = 0xFE;
	while((reg_stat & 1) != 0) {}
	for(uint16_t i = 0; i < 512; i++) {
		reg_sdr = buff[i];
		while((reg_stat & 1) != 0) {}
	}
	uint16_t tries = 32000;
	do {
		reg_sdr = 0xFF;
		while((reg_stat & 1) != 0) {}
		if(reg_sdr != 0xFF) break;
		tries--;
	}while(tries);
	if(!tries) {
		sd_desel();
		return 3;
	}
	if((reg_sdr & 0x1F) == 5) {
		tries = 32000;
		do {
			reg_sdr = 0xFF;
			while((reg_stat & 1) != 0) {}
			if(reg_sdr != 0) break;
			tries--;
		}while(tries);
		if(!tries) {
			sd_desel();
			return 4;
		}
	}else {
		sd_desel();
		return 2;
	}
	sd_desel();
	return 0;
}
