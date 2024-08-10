/*-----------------------------------------------------------------------*/
/* Low level disk I/O module skeleton for FatFs     (C)ChaN, 2016        */
/*-----------------------------------------------------------------------*/
/* If a working storage control module is available, it should be        */
/* attached to the FatFs via a glue function rather than modifying it.   */
/* This is an example of glue functions to attach various exsisting      */
/* storage control modules to the FatFs module with a defined API.       */
/*-----------------------------------------------------------------------*/

#include "ff.h"
#include "diskio.h"		/* FatFs lower layer API */
#include "ata.h"
#include <avr/io.h>

/* Definitions of physical drive number for each drive */
#define DEV_HDD		0


/*-----------------------------------------------------------------------*/
/* Get Drive Status                                                      */
/*-----------------------------------------------------------------------*/

DSTATUS disk_status (
	BYTE pdrv		/* Physical drive nmuber to identify the drive */
)
{
	DSTATUS stat = 0;

	switch (pdrv) {
	case DEV_HDD :
		if(ata_getPartitionSize(0) == 0) stat = STA_NOINIT;
		return stat;
	}
	return STA_NOINIT;
}



/*-----------------------------------------------------------------------*/
/* Inidialize a Drive                                                    */
/*-----------------------------------------------------------------------*/

DSTATUS disk_initialize (
	BYTE pdrv				/* Physical drive nmuber to identify the drive */
)
{
	DSTATUS stat = 0;

	switch (pdrv) {
	case DEV_HDD:
		return stat;
	}
	return STA_NOINIT;
}



/*-----------------------------------------------------------------------*/
/* Read Sector(s)                                                        */
/*-----------------------------------------------------------------------*/

DRESULT disk_read (
	BYTE pdrv,		/* Physical drive nmuber to identify the drive */
	BYTE *buff,		/* Data buffer to store read data */
	DWORD sector,	/* Start sector in LBA */
	UINT count		/* Number of sectors to read */
)
{
	DRESULT res = RES_OK;

	switch (pdrv) {
	case DEV_HDD:
		if(ata_getPartitionSize(0) == 0) return RES_NOTRDY;
		uint8_t t = ata_readByte(REG_STAT_CMD);
		if(!((t & 0b10000000) == 0 && (t & 0b01000000) != 0)) return RES_NOTRDY;
		/*for(UINT i = 0; i < count; i++){
			uint32_t actualSec = count - i - 1;
			uint8_t err = ata_readSector(buff, sector + actualSec + ata_getPartitionLocation(0));
			if(err != 0) return RES_ERROR;
			if(count == 1 || actualSec == 0) break;
			for(uint16_t j = 0; j < 512; j++){
				buff[actualSec * 512 + j] = buff[j];
			}
		}*/
		uint8_t err = ata_readSectors(buff, (uint32_t)sector + ata_getPartitionLocation(0), count);
		if(err != 0) return RES_ERROR;
		return res;
	}

	return RES_PARERR;
}



/*-----------------------------------------------------------------------*/
/* Write Sector(s)                                                       */
/*-----------------------------------------------------------------------*/

DRESULT disk_write (
	BYTE pdrv,			/* Physical drive nmuber to identify the drive */
	const BYTE *buff,	/* Data to be written */
	DWORD sector,		/* Start sector in LBA */
	UINT count			/* Number of sectors to write */
)
{	
	/*DRESULT res = RES_OK;

	switch (pdrv) {
	case DEV_HDD:
		if(ata_getPartitionSize(0) == 0) return RES_NOTRDY;
		uint8_t t = ata_readByte(REG_STAT_CMD);
		if(!((t & 0b10000000) == 0 && (t & 0b01000000) != 0)) return RES_NOTRDY;
		uint8_t err = ata_writeSectors(buff, (uint32_t)sector + ata_getPartitionLocation(0), count);
		if(err != 0) return RES_ERROR;
		return res;
	}*/

	return RES_PARERR;
}



/*-----------------------------------------------------------------------*/
/* Miscellaneous Functions                                               */
/*-----------------------------------------------------------------------*/

DRESULT disk_ioctl (
	BYTE pdrv,		/* Physical drive nmuber (0..) */
	BYTE cmd,		/* Control code */
	void *buff		/* Buffer to send/receive control data */
)
{
	DRESULT res = RES_PARERR;

	switch (pdrv) {
	case DEV_HDD:
		if(ata_getSectorCount() == 0) return RES_NOTRDY;
		uint8_t t = ata_readByte(REG_STAT_CMD);
		if(!((t & 0b10000000) == 0 && (t & 0b01000000) != 0)) return RES_NOTRDY;
		if(cmd == CTRL_SYNC) return RES_OK;
		if(cmd == GET_BLOCK_SIZE || cmd == GET_SECTOR_SIZE){
			 *(DWORD*)buff = 512;
			 return RES_OK;
		}
		if(cmd == GET_SECTOR_COUNT){
			*(DWORD*)buff = ata_getPartitionSize(0);
			return RES_OK;
		}
		if(cmd == CTRL_TRIM){
			return RES_OK;
		}
		return res;
	}

	return RES_PARERR;
}

