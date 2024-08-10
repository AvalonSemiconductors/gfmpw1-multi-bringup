/*
 * ata.c
 *
 * Created: 7/2/2018 11:18:32 PM
 *  Author: lucah
 */ 

#ifndef F_CPU
#define F_CPU 20000000UL
#endif

#include <avr/io.h>
#include "ata.h"
#include <stdint.h>
#include <util/delay.h>
#include <stdio.h>

partition partitions[4];
uint32_t sizeinsectors;

inline void set_dout(uint8_t d) {
	PORTC &= 0b01000010;
	PORTC |= (d & 1);
	PORTC |= (d & 0b00011110) << 1;
	if((d & 32) != 0) PORTC |= 128;
	PORTB &= 0b00111111;
	PORTB |= (d & 0b11000000);
}

inline uint8_t get_din() {
	uint8_t res = PINB & 0b11000000;
	res |= PINC & 1;
	res |= (PINC & 0b00111100) >> 1;
	if((PINC & 128) != 0) res |= 32;
	return res;
}

inline void set_dir_out() {
	DDRB |= 0b11000000;
	DDRC |= 0b10111101;
}

inline void set_dir_in() {
	DDRB &= 0b00111111;
	DDRC &= 0b01000010;
	PORTB |= 0b11000000;
	PORTC |= 0b10111101;
}

uint8_t ata_init() {
	//Wait for drive to be ready
	for(uint8_t i = 0; i < 20; i++) _delay_ms(10);
	
	ata_reset();
	
	//Enable 8-bit mode
	ata_writeByte(REG_ERR_FEAT, 0x01);
	_delay_ms(1);
	ata_writeByte(REG_STAT_CMD, CMD_SET_FEATURES);
	_delay_ms(1);
	ata_busyWait();
	
	//Enable LBA mode
	ata_writeByte(REG_DRIVE_HEAD, DRV_HEAD_BASE);
	_delay_ms(1);
	ata_busyWait();
	
	//Get info
	ata_writeByte(REG_STAT_CMD, CMD_IDENT);
	_delay_us(10);
	ata_busyWait();
	ata_waitForData();
	_delay_us(200);
	
	ata_readBuffer(disk_buff, 512);
	
	uint8_t LBAsupported = (disk_buff[49 * 2 + 1] & 2) == 2 ? 1 : 0;
	if(!LBAsupported) return ERR_LBA_NOT_SUPPORTED;
	sizeinsectors = * ((unsigned long*) (disk_buff + 120));
	for(uint8_t i = 0; i < 20; i+=2) {
		putchar(disk_buff[20 + i + 1]);
		putchar(disk_buff[20 + i]);
	}
	putchar('\r');
	putchar('\n');
	for(uint8_t i = 0; i < 40; i+=2) {
		putchar(disk_buff[54 + i + 1]);
		putchar(disk_buff[54 + i]);
	}
	putchar('\r');
	putchar('\n');
	if((disk_buff[53 * 2] & 1) == 0) return ERR_DATA_INVALID;
	
	//Detect partitions
	uint8_t err = ata_readSector(disk_buff, 0); //Read sector 0 (contains MBR)
#ifdef ATA_DEBUG
	printf("WARN: ATA_DEBUG set\r\nSector 0:");
	for(int i = 0; i < 512; i++) {
		if((i & 15) == 0) {
			printf("\r\n%03x | ", i);
		}
		printf("%02x ", disk_buff[i]);
	}
	printf("\r\n\r\n");
#endif
	if(err != 0) return err | 0b00100000; //Make sure bit 5 is always one, so this error code isn't mistaken with any other errors this function can return
	if(disk_buff[510] != 0x55 || disk_buff[511] != 0xAA){
		return ERR_INVALID_MBR;
	}
	
	for(uint8_t i = 0; i < 4; i++){
		partitions[i].id = i;
		partitions[i].start = * ((unsigned long*) (disk_buff + (446 + i * 16 + 8)));
		partitions[i].size = * ((unsigned long*) (disk_buff + (446 + i * 16 + 12)));
		partitions[i].end = partitions[i].start + partitions[i].size;
		partitions[i].type = disk_buff[446 + i * 16 + 4];
		if(partitions[i].start > sizeinsectors || partitions[i].end > sizeinsectors || partitions[i].type == 0){ //Invalid partition
			partitions[i].start = 0; //Clear info
			partitions[i].size = 0;
			partitions[i].end = 0;
			partitions[i].type = 0;
			if(i == 1) return ERR_INVALID_MBR;
		}
	}
	
	return ata_runDiag();
}

//Does a software reset
void ata_reset() {
	for(uint8_t i = 0; i < 12; i++) _delay_ms(250);
	//Software reset
	ata_writeByte(REG_ASTA_CTRL, 0x06);
	for(uint8_t i = 0; i < 10; i++) _delay_ms(10);
	ata_writeByte(REG_ASTA_CTRL, 0x00);
	for(uint8_t i = 0; i < 10; i++) _delay_ms(10);
	ata_busyWait();
}

//Run drive diagnostics
//Returns: 0 when no error was found, error code otherwise
uint8_t ata_runDiag() {
	//Check for errors
	ata_writeByte(REG_STAT_CMD, CMD_DIAG);
	_delay_ms(1);
	ata_busyWait();
	uint8_t errRes = (uint8_t)ata_readByte(REG_ERR_FEAT);
	return errRes == 0x01 ? 0x00 : errRes;
}

//Writes a single byte to the drive
//Arguments: target address, data
void ata_writeByte(uint8_t addr, uint8_t dat) {
	PORTD = (PORTD & 128) | (addr & 0b01111000) | (1 << PD2) | DIOW | DIOR;
	PORTA &= 0b11111000;
	PORTA |= (addr & 0b00000111);
	set_dir_out();
	set_dout(dat);
	PORTD &= ~DIOW;
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	PORTD |= DIOW;
	PORTD |= NOP;
	set_dir_in();
}

//Reads a single byte from the drive
//Arguments: source address
//Returns: read byte
uint8_t ata_readByte(uint8_t addr){
	PORTD = (PORTD & 128) | (addr & 0b01111000) | (1 << PD2) | DIOW | DIOR;
	PORTA &= 0b11111000;
	PORTA |= (addr & 0b00000111);
	set_dir_in();
	PORTD &= ~DIOR;
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	uint8_t res = get_din();
	PORTD |= DIOR;
	PORTD |= NOP;
	asm volatile("nop");
	return res;
}

//Wait for the BSY bit to be 0 and for the DRDY bit to be 1
void ata_busyWait(){
	while(1){
		uint8_t t = ata_readByte(REG_STAT_CMD);
		if((t & 0b10000000) == 0 && (t & 0b01000000) != 0){
			break;
		}
	}
}

//Wait for the DRY bit to be 1
void ata_waitForData(){
	while(1){
		uint8_t t = ata_readByte(REG_STAT_CMD);
		if((t & 0b00001000) != 0){
			break;
		}
	}
}

//Read the drive's buffer
//Arguments: destination array, number of bytes to read (must be divisible by 2)
void ata_readBuffer(unsigned char *Buffer, uint16_t numBytes){
	PORTD = (PORTD & 128) | (REG_DATA & 0b01111000) | (1 << PD2) | DIOW | DIOR;
	PORTA &= 0b11111000;
	PORTA |= (REG_DATA & 0b00000111);
	set_dir_in();
	for(uint16_t i = 0; i < numBytes; i++) {
		PORTD &= ~DIOR;
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		Buffer[i] = get_din();
		PORTD |= DIOR;
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
	}
	PORTD |= NOP;
}

//Write to the drive's buffer
//Arguments: source array, number of bytes to write (must be divisible by 2)
void ata_writeBuffer(const unsigned char *Buffer, uint16_t numBytes) {
	PORTD = (PORTD & 128) | (REG_DATA & 0b01111000) | (1 << PD2) | DIOW | DIOR;
	PORTA &= 0b11111000;
	PORTA |= (REG_DATA & 0b00000111);
	set_dir_out();
	
	for(uint16_t i = 0; i < numBytes; i++){
		set_dout(Buffer[i]);
		PORTD &= ~DIOW;
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		PORTD |= DIOW;
		asm volatile("nop");
		asm volatile("nop");
	}
	PORTD |= NOP;
	set_dir_in();
}

//Reads a single sector
//Parameters: destination array, LBA address
//Returns: error code (0 = no error)
uint8_t ata_readSector(unsigned char *Buffer, uint32_t lba) {
	return ata_readSectors(Buffer, lba, 1);
}

uint8_t ata_beginRead(uint32_t lba, uint8_t count) {
	ata_busyWait();
	
	ata_writeByte(REG_SECTOR_NUM, (uint8_t)lba);
	ata_writeByte(REG_CYLINDER_LOW, (uint8_t)((uint16_t)lba >> 8));
	ata_writeByte(REG_CYLINDER_HIGH, (uint8_t)(lba >> 16));
	ata_writeByte(REG_DRIVE_HEAD, DRV_HEAD_BASE | ((uint8_t)(lba >> 24) & 0x0FL));
	ata_writeByte(REG_SECTOR_COUNT, count);
	
	ata_writeByte(REG_STAT_CMD, CMD_READ_SEC);
	ata_busyWait();
	
	if(ata_readByte(REG_STAT_CMD) & 0x01)
		return ata_readByte(REG_ERR_FEAT);
		
	ata_waitForData();
	return 0;
}

//Reads multiple sectors
//Parameters: destination array, LBA address, ammount of sectors to read
//Returns: error code (0 = no error)
uint8_t ata_readSectors(unsigned char *Buffer, uint32_t lba, uint8_t count) {
	uint8_t a = ata_beginRead(lba, count);
	if(a) return a;
	
	ata_readBuffer(Buffer, (uint16_t)count * 512);
	
	return (ata_readByte(REG_STAT_CMD) & 0x01) ? ata_readByte(REG_ERR_FEAT) : 0;
}

//Writes a single sector
//Parameters: source array, LBA address
//Returns: error code (0 = no error)
uint8_t ata_writeSector(const unsigned char *Buffer, uint32_t lba) {
	return ata_writeSectors(Buffer, lba, 1);
}

//Writes multiple sectors
//Parameters: source array, LBA address, ammount of sectors to write
//Returns: error code (0 = no error)
uint8_t ata_writeSectors(const unsigned char *Buffer, uint32_t lba, uint8_t count) {
	ata_busyWait();
	
	ata_writeByte(REG_SECTOR_NUM, (uint8_t)lba);
	ata_writeByte(REG_CYLINDER_LOW, (uint8_t)((uint16_t)lba >> 8));
	ata_writeByte(REG_CYLINDER_HIGH, (uint8_t)(lba >> 16));
	ata_writeByte(REG_DRIVE_HEAD, DRV_HEAD_BASE | ((uint8_t)(lba >> 24) & 0x0FL));
	ata_writeByte(REG_SECTOR_COUNT, count);
	
	ata_writeByte(REG_STAT_CMD, CMD_WRITE_SEC);
	ata_busyWait();
	ata_waitForData();
	
	ata_writeBuffer(Buffer, (uint16_t)count * 512);
	
	ata_busyWait();
	
	return (ata_readByte(REG_STAT_CMD) & 0x01) ? ata_readByte(REG_ERR_FEAT) : 0;
}

uint32_t ata_getSectorCount() {
	return sizeinsectors;
}

uint64_t ata_getSizeInBytes() {
	return (uint64_t)sizeinsectors * (uint64_t)512;
}

uint32_t ata_getPartitionLocation(uint8_t partitionID) {
	return partitions[partitionID].start;
}

uint32_t ata_getPartitionSize(uint8_t partitionID) {
	return partitions[partitionID].size;
}

uint32_t ata_getEndOfPartition(uint8_t partitionID) {
	return partitions[partitionID].end;
}

uint8_t ata_getPartitionType(uint8_t partitionID) {
	return partitions[partitionID].type;
}

uint8_t ata_getPartitionCount() {
	return 4;
}
