#define CRC16 0x8005
uint16_t gen_crc16(const uint8_t *data, uint8_t size);
uint32_t crc32c_sw(uint32_t crc, const uint8_t *data, uint32_t len);