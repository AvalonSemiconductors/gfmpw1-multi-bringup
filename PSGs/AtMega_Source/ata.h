/*
 * ata.h
 *
 * Created: 6/30/2018 7:16:50 PM
 *  Author: lucah
 */ 

#include <stdint.h>

#ifndef ATA_H_
#define ATA_H_

extern unsigned char disk_buff[512];

#define DA0 1
#define DA1 2
#define DA2 4
#define CS1FX (1 << PD5)
#define CS3FX (1 << PD6)
#define DIOW (1 << PD3)
#define DIOR (1 << PD4)

#define NOP (CS1FX | CS3FX | DIOW | DIOR)

//Control block registers
#define REG_DATA (CS3FX)
#define REG_ERR_FEAT (CS3FX | DA0)
#define REG_SECTOR_COUNT (CS3FX | DA1)
#define REG_SECTOR_NUM (CS3FX | DA0 | DA1)
#define REG_CYLINDER_LOW (CS3FX | DA2)
#define REG_CYLINDER_HIGH (CS3FX | DA2 | DA0)
#define REG_DRIVE_HEAD (CS3FX | DA2 | DA1)
#define REG_STAT_CMD (CS3FX | DA2 | DA1 | DA0)

//Command block registers
#define REG_ASTA_CTRL (CS1FX | DA2 | DA1)
#define REG_ADDR (CS1FX | DA2 | DA1 | DA0)

//All commands
#define CMD_DIAG 0x90
#define CMD_FORMAT 0x50
#define CMD_IDENT 0xEC
#define CMD_INIT 0x91
#define CMD_NOP 0x00
#define CMD_READ_BUFF 0xE4
#define CMD_READ_LONG_RTRY 0x22
#define CMD_READ_LONG 0x23
#define CMD_READ_MUL 0xC4
#define CMD_READ_SEC_RTRY 0x20
#define CMD_READ_SEC 0x21
#define CMD_VERIFY_RTRY 0x40
#define CMD_VERIFY 0x41
#define CMD_RECALI 0x10
#define CMD_SEEK 0x70
#define CMD_SET_FEATURES 0xEF
#define CMD_SET_MULMODE 0xC6
#define CMD_WRITE_BUFF 0xE8
#define CMD_WRITE_LONG_RTRY 0x32
#define CMD_WRITE_LONG 0x33
#define CMD_WRITE_MULT 0xC5
#define CMD_WRITE_SAME 0xE9
#define CMD_WRITE_SEC_RTRY 0x30
#define CMD_WRITE_SEC 0x31
#define CMD_WRITE_VERIFY 0x3C
#define CMD_CHECK_PWR 0xE5
#define CMD_IDLE 0xE3
#define CMD_IDLE_NOW 0xE1
#define CMD_SLEEP 0xE6
#define CMD_STANDBY 0xE2
#define CMD_STANDBY_NOW 0xE0

//Errors that can be returned by runDiag and ataInit
#define ERR_NO_ERR 0x00
#define ERR_FORMATTER_DEV_ERROR 0x02
#define ERR_SECTOR_BUFF_ERR 0x03
#define ERR_ECC_ERR 0x04
#define ERR_CONTROL_ERR 0x05
#define ERR_LBA_NOT_SUPPORTED 0x06
#define ERR_DATA_INVALID 0x07
#define ERR_INVALID_MBR 0x08
//(This can only be returned by the createPartition function)
#define ERR_INVALID_PARTITION 0x09

#define DRV_HEAD_BASE 0b11100000

uint8_t ata_init();
uint8_t ata_runDiag();
void ata_writeByte(uint8_t addr, uint8_t dat);
uint8_t ata_readByte(uint8_t addr);
void ata_busyWait();
void ata_waitForData();
void ata_readBuffer(unsigned char *Buffer, uint16_t numBytes);
void ata_writeBuffer(const unsigned char *Buffer, uint16_t numBytes);
char *ata_getModel();
char *ata_getSerial();
uint32_t ata_getSectorCount();
uint8_t ata_isLBASupported();
uint64_t ata_getSizeInBytes();
uint8_t ata_readSector(unsigned char *Buffer, uint32_t lba);
uint8_t ata_readSectors(unsigned char *Buffer, uint32_t lba, uint8_t count);
uint32_t ata_getPartitionLocation(uint8_t partitionID);
uint32_t ata_getPartitionSize(uint8_t partitionID);
uint32_t ata_getEndOfPartition(uint8_t partitionID);
uint8_t ata_getPartitionType(uint8_t partitionID);
uint8_t ata_getPartitionCount();
void ata_reset();
uint8_t ata_writeSector(const unsigned char *Buffer, uint32_t lba);
uint8_t ata_writeSectors(const unsigned char *Buffer, uint32_t lba, uint8_t count);
uint8_t ata_beginRead(uint32_t lba, uint8_t count);

typedef struct {
	uint8_t id;
	uint32_t start;
	uint32_t size;
	uint32_t end;
	uint8_t type;
} partition;

#endif /* ATA_H_ */
