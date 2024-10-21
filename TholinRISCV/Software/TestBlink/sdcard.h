#ifndef SDCARD_H_
#define SDCARD_H_

#define SD_CMD0 0
#define SD_CMD0_ARG 0

#define SD_CMD8 8
#define SD_CMD8_ARG 0x1AA

#define SD_CMD58 58
#define SD_CMD58_ARG 0

#define SD_CMD55 55
#define SD_CMD55_ARG 0

#define SD_ACMD41 41
#define SD_ACMD41_ARG 0x40000000

#define SD_CMD59 59
#define SD_CMD59_ARG 0

#define SD_CMD16 16
#define SD_CMD16_ARG 512

#define SD_CMD9 9
#define SD_CMD9_ARG 0

#define SD_CMD17 17

#define SD_CMD24 24

extern uint32_t sd_num_blocks;

uint8_t sd_init();
uint8_t sd_read_block(uint32_t addr, uint8_t* buff);
uint8_t sd_write_block(uint32_t addr, uint8_t* buff);

#endif
