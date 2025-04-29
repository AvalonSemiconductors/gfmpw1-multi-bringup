#ifndef EEPROM_H_
#define EEPROM_H_

#define EEPROM_ADDRESS 0b10101110

uint8_t eeprom_read(uint8_t *buff, uint16_t addr, uint16_t len);
uint8_t eeprom_write(uint8_t *buff, uint16_t addr, uint16_t len);

#endif
