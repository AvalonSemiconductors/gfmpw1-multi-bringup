#include <stdint.h>

#include "tholinstd.h"
#include "iputils.h"
#include "ethernet.h"
#include "phy.h"
#include "io.h"

#define ENC_BANK_MASK 0x60
#define ENC_BIT_FIELD_CLR 0xA0
#define ENC_BIT_FIELD_SET 0x80
#define ENC_WRITE_CTRL_REG 0x40
#define ENC_READ_CTRL_REG 0x00
#define ENC_ECON1 0x1F
#define ENC_ECON1_BSEL1 0x02
#define ENC_ECON1_BSEL0 0x01
#define ENC_ECON1_TXRST 0x80
#define ENC_ECON1_RXEN 0x04
#define ENC_ECON1_TXRTS 0x08
#define ENC_ECON2 0x1E
#define ENC_ECON2_PKTDEC 0x40
#define ENC_SOFT_RESET 0xFF
#define ENC_ESTAT 0x1D
#define ENC_ESTAT_CLKRDY 0x01
#define ENC_ERXST 0x08
#define ENC_ERXRDPT 0x0C
#define ENC_ERXND 0x0A
#define ENC_ETXST 0x04
#define ENC_ETXND 0x06
#define ENC_ERXFCON 0x38
#define ENC_ERXFCON_UCEN 0x80
#define ENC_ERXFCON_CRCEN 0x20
#define ENC_ERXFCON_PMEN 0x10
#define ENC_ERXFCON_MCEN 0x02
#define ENC_ERXFCON_BCEN 0x01
#define ENC_EPMM0 0x28
#define ENC_EPMM1 0x29
#define ENC_EPMM2 0x2A
#define ENC_EPMM3 0x2B
#define ENC_EPMM4 0x2C
#define ENC_EPMM5 0x2D
#define ENC_EPMM6 0x2E
#define ENC_EPMM7 0x2F
#define ENC_EPMCS 0x30
#define ENC_EPMO 0x34
#define ENC_MACON1 0xC0
#define ENC_MACON1_MARXEN 0x01
#define ENC_MACON1_TXPAUS 0x08
#define ENC_MACON1_RXPAUS 0x04
#define ENC_MACON2 0xC1
#define ENC_MACON3 0xC2
#define ENC_MACON3_PADCFG0 0x20
#define ENC_MACON3_TXCRCEN 0x10
#define ENC_MACON3_FRMLNEN 0x02
#define ENC_MACON3_FULDPX 0x01
#define ENC_MAIPG 0xC6
#define ENC_MABBIPG 0xC4
#define ENC_MAMXFL 0xCA
#define ENC_MAADR0 0xE4
#define ENC_MAADR1 0xE5
#define ENC_MAADR2 0xE2
#define ENC_MAADR3 0xE3
#define ENC_MAADR4 0xE0
#define ENC_MAADR5 0xE1
#define ENC_PHCON1 0x00
#define ENC_PHCON1_PDPXMD 0x0100
#define ENC_PHCON2 0x10
#define ENC_PHCON2_HDLDIS 0x0100
#define ENC_EIE 0x1B
#define ENC_EIE_INTIE 0x80
#define ENC_EIE_PKTIE 0x40
#define ENC_EREVID 0x72
#define ENC_MIREGADR 0xD4
#define ENC_MIWR 0xD6
#define ENC_MISTAT 0xEA
#define ENC_MISTAT_BUSY 0x01
#define ENC_EWRPT 0x02
#define ENC_WRITE_BUFF_MEM 0x7A
#define ENC_READ_BUFF_MEM 0x3A
#define ENC_EPKTCNT 0x39
#define ENC_ERDPT 0x00

uint8_t current_bank;
uint16_t next_packet_ptr;
uint8_t interrupt_state = 0;

void enc_write_op(uint8_t op, uint8_t address, uint8_t data) {
	reg_porta &= ~ENC_CS_PIN;
	reg_sdr = op | (address & 0x1F);
	while((reg_stat & 1) != 0) {}
	reg_sdr = data;
	while((reg_stat & 1) != 0) {}
	reg_porta |= ENC_CS_PIN;
}

uint8_t enc_read_op(uint8_t op, uint8_t address) {
	reg_porta &= ~ENC_CS_PIN;
	reg_sdr = op | (address & 0x1F);
	while((reg_stat & 1) != 0) {}
	if((address & 0x80) != 0) {
		reg_sdr = 0;
		while((reg_stat & 1) != 0) {}
	}
	reg_sdr = 0;
	while((reg_stat & 1) != 0) {}
	reg_porta |= ENC_CS_PIN;
	return reg_sdr;
}

inline void enc_set_bank(uint8_t address) {
	if((address & ENC_BANK_MASK) != current_bank) {
		enc_write_op(ENC_BIT_FIELD_CLR, ENC_ECON1, ENC_ECON1_BSEL1 | ENC_ECON1_BSEL0);
		current_bank = address & ENC_BANK_MASK;
		enc_write_op(ENC_BIT_FIELD_SET, ENC_ECON1, current_bank>>5);
	}
}

void enc_write_reg_byte(uint8_t address, uint8_t data) {
	enc_set_bank(address);
	enc_write_op(ENC_WRITE_CTRL_REG, address, data);
}

void enc_write_reg(uint8_t address, uint16_t data) {
	enc_write_reg_byte(address, data);
	enc_write_reg_byte(address + 1, data >> 8);
}

inline uint8_t enc_read_reg_byte(uint8_t address) {
	enc_set_bank(address);
	return enc_read_op(ENC_READ_CTRL_REG, address);
}

uint16_t enc_read_reg(uint8_t address) {
	uint16_t res = enc_read_reg_byte(address);
	res |= (uint16_t)enc_read_reg_byte(address) << 8;
	return res;
}

void enc_write_phy(uint8_t address, uint16_t data) {
	enc_write_reg_byte(ENC_MIREGADR, address);
	enc_write_reg(ENC_MIWR, data);
	while((enc_read_reg_byte(ENC_MISTAT) & ENC_MISTAT_BUSY) != 0);
}

#define RXBUFF_START 0x0000
#define RXBUFF_END 0x05FF
#define TXBUFF_START 0x0600
#define TXBUFF_END 0x11FF

uint8_t phy_init(void) {
	interrupt_state = 0;
	reg_ddra  = reg_ddra | ENC_CS_PIN;
	reg_porta = reg_porta | ENC_CS_PIN;
	current_bank = 0xFF;
	enc_write_op(ENC_SOFT_RESET, 0, ENC_SOFT_RESET);
	while((enc_read_op(ENC_READ_CTRL_REG, ENC_ESTAT) & ENC_ESTAT_CLKRDY) == 0);
	//puts("ENC soft reset done\r\n");
	next_packet_ptr = 0;
	enc_write_reg(ENC_ERXST, RXBUFF_START);
	enc_write_reg(ENC_ERXRDPT, RXBUFF_START);
	enc_write_reg(ENC_ERXND, RXBUFF_END);
	enc_write_reg(ENC_ETXST, TXBUFF_START);
	enc_write_reg(ENC_ETXND, TXBUFF_END);
	enc_write_reg_byte(ENC_ERXFCON, ENC_ERXFCON_UCEN|ENC_ERXFCON_CRCEN|ENC_ERXFCON_BCEN|ENC_ERXFCON_MCEN);
	//Or disable filters: enc_write_reg(ENC_ERXFCON, 0x00);
	enc_write_reg_byte(ENC_MACON2, 0x00);
	enc_write_reg_byte(ENC_MACON1, ENC_MACON1_MARXEN|ENC_MACON1_TXPAUS|ENC_MACON1_RXPAUS);
	//enc_write_op(ENC_BIT_FIELD_SET, ENC_MACON3, ENC_MACON3_PADCFG0|ENC_MACON3_TXCRCEN|ENC_MACON3_FRMLNEN);
	enc_write_op(ENC_BIT_FIELD_SET, ENC_MACON3, ENC_MACON3_PADCFG0|ENC_MACON3_TXCRCEN|ENC_MACON3_FRMLNEN|ENC_MACON3_FULDPX);
	enc_write_reg(ENC_MAIPG, 0x0C12);
	//enc_write_reg_byte(ENC_MABBIPG, 0x12);
	enc_write_reg_byte(ENC_MABBIPG, 0x15);
	enc_write_reg(ENC_MAMXFL, MAX_PAYLOAD_LENGTH);
	enc_write_reg_byte(ENC_MAADR5, our_mac[5]);
	enc_write_reg_byte(ENC_MAADR4, our_mac[4]);
	enc_write_reg_byte(ENC_MAADR3, our_mac[3]);
	enc_write_reg_byte(ENC_MAADR2, our_mac[2]);
	enc_write_reg_byte(ENC_MAADR1, our_mac[1]);
	enc_write_reg_byte(ENC_MAADR0, our_mac[0]);
	
	/*enc_write_reg(ENC_EPMO, 0);
	enc_write_reg_byte(ENC_EPMM0, 0b00110000);
	enc_write_reg_byte(ENC_EPMM1, 0);
	enc_write_reg_byte(ENC_EPMM2, 0);
	enc_write_reg_byte(ENC_EPMM3, 0);
	enc_write_reg_byte(ENC_EPMM4, 0);
	enc_write_reg_byte(ENC_EPMM5, 0);
	enc_write_reg_byte(ENC_EPMM6, 0);
	enc_write_reg_byte(ENC_EPMM7, 0);
	enc_write_reg(ENC_EPMCS, 0xCCCC);*/
	
	//enc_write_phy(ENC_PHCON2, ENC_PHCON2_HDLDIS);
	enc_write_phy(ENC_PHCON1, ENC_PHCON1_PDPXMD);
	enc_set_bank(ENC_ECON1);
	//No interrupts! enc_write_op(ENC_BIT_FIELD_SET, ENC_EIE, ENC_EIE_INTIE|ENC_EIE_PKTIE);
	enc_write_op(ENC_BIT_FIELD_SET, ENC_ECON1, ENC_ECON1_RXEN);
	uint8_t rev = enc_read_reg_byte(ENC_EREVID);
	printf("enc28j60 revid: %x\r\n", rev);
	return rev;
}

void phy_send(uint8_t* buff, uint16_t len) {
	if(TXBUFF_START + len > TXBUFF_END) return;
	phy_pause_interrupts();
	for(uint16_t i = 0; i < 10000; i++) {
		if((enc_read_reg_byte(ENC_ECON1) & ENC_ECON1_TXRST) == 0) {
			break;
		}
		//if(i == 9999) puts("ENC TRANSACTION TIMED OUT!!!\r\n");
	}
	
	enc_write_reg(ENC_EWRPT, TXBUFF_START);
	enc_write_reg(ENC_ETXND, TXBUFF_START+len);
	enc_write_op(ENC_WRITE_BUFF_MEM, 0, 0x00);
	
	reg_porta &= ~ENC_CS_PIN;
	reg_sdr = ENC_WRITE_BUFF_MEM;
	while((reg_stat & 1) != 0) {}
	while(len--) {
		reg_sdr = *buff++;
		while((reg_stat & 1) != 0) {}
	}
	reg_porta |= ENC_CS_PIN;
	
	enc_write_op(ENC_BIT_FIELD_SET, ENC_ECON1, ENC_ECON1_TXRTS);
	phy_unpause_interrupts();
}

uint8_t phy_available(void) {
	return enc_read_reg_byte(ENC_EPKTCNT);
}

uint16_t phy_receive(uint8_t* buff) {
	if(enc_read_reg_byte(ENC_EPKTCNT) == 0) return 0;
	enc_write_reg(ENC_ERDPT, next_packet_ptr);
	uint8_t rx_header[6];
	reg_porta &= ~ENC_CS_PIN;
	reg_sdr = ENC_READ_BUFF_MEM;
	while((reg_stat & 1) != 0) {}
	for(uint8_t i = 0; i < 6; i++) {
		reg_sdr = 0x00;
		while((reg_stat & 1) != 0) {}
		rx_header[i] = reg_sdr;
	}
	reg_porta |= ENC_CS_PIN;
	uint16_t nextPacket = rx_header[0] | ((uint16_t)rx_header[1] << 8);
	uint16_t byteCount = rx_header[2] | ((uint16_t)rx_header[3] << 8);
	uint16_t status = rx_header[4] | ((uint16_t)rx_header[5] << 8);
	next_packet_ptr = nextPacket;
	//Remove CRC count
	uint16_t len = byteCount - 4;
	if(len > MAX_PAYLOAD_LENGTH+4) len = MAX_PAYLOAD_LENGTH+4;
	if((status & 0x80) == 0) len = 0;
	else {
		reg_porta &= ~ENC_CS_PIN;
		reg_sdr = ENC_READ_BUFF_MEM;
		while((reg_stat & 1) != 0) {}
		for(uint16_t i = 0; i < len; i++) {
			reg_sdr = 0x0;
			while((reg_stat & 1) != 0) {}
			buff[i] = reg_sdr;
		}
		reg_porta |= ENC_CS_PIN;
	}
	buff[len] = 0;
	if(next_packet_ptr - 1 > RXBUFF_END) enc_write_reg(ENC_ERXRDPT, RXBUFF_END);
	else enc_write_reg(ENC_ERXRDPT, next_packet_ptr - 1);
	enc_write_op(ENC_BIT_FIELD_SET, ENC_ECON2, ENC_ECON2_PKTDEC);
	return len;
}

void phy_pause_interrupts(void) {
	if(eth_in_interrupt) return;
	asm volatile(".word 0x00800073"); //cli
}

void phy_unpause_interrupts(void) {
	if(eth_in_interrupt) return;
	asm volatile(".word 0x00700073"); //sei
}
