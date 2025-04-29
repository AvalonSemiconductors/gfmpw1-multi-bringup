#ifndef PHY_H_
#define PHY_H_

#define ENC_CS_PIN (1 << 4)

uint8_t phy_init(void);
void phy_send(uint8_t* buff, uint16_t len);
uint8_t phy_available(void);
uint16_t phy_receive(uint8_t* buff);

void phy_pause_interrupts(void);
void phy_unpause_interrupts(void);

#endif
