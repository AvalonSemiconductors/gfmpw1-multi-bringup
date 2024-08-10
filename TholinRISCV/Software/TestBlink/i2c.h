#ifndef I2C_H_
#define I2C_H_

#define BIT_SCL 2
#define BIT_SDA 4
#define ACK 0
#define NACK 1

void i2c_setup(void);
void i2c_begin(void);
void i2c_end(void);
void i2c_restart(void);
uint8_t i2c_transfer(uint8_t data);
uint8_t i2c_receive(uint8_t ack);

#endif
