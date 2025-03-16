#ifndef F_CPU
#define F_CPU 20000000UL
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "ata.h"
#include "rng.h"
#include "ff.h"

#define SEL_SID 0
#define SEL_SN 1
#define SEL_AY 2
#define SEL_TBB 3

unsigned char disk_buff[512];

void writechar(char chr){
	while(!(UCSRA & (1<<UDRE)));	//busy loop
	UDR = chr;
}

uint8_t readchar(){
	while(!(UCSRA & (1<<RXC))); 	//busy loop
	uint8_t copy = UDR;
    return copy;
}

//debug things
static int uart_putchar(char c, FILE *stream){
	
	//if(c == '\n') writechar('\r');
	writechar(c);
	
	return c;
}

static int uart_getchar(FILE *stream){
	
	return readchar();
}

void set_stereo() {
	PORTB |= (1 << PB2);
	PORTB &= ~(1 << PB1);
}

void set_mono() {
	PORTB &= ~(1 << PB2);
	PORTB |= (1 << PB1);
}

uint8_t sel;
uint8_t err_ret;
volatile uint16_t buffer_pos;
volatile uint8_t bmask;
uint8_t stereo;
volatile uint8_t playing;
FIL sndFile;
FATFS fs;
const char t1[] PROGMEM = "sid/";
const char t2[] PROGMEM = "sn/";
const char t3[] PROGMEM = "ay/";
const char t4[] PROGMEM = "tbb/";
const char mount_err_msg[] PROGMEM = "Error mounting volume: %d\r\n";
const char umount_err_msg[] PROGMEM = "Error un-mounting partition: %d\r\n";
const char disk_capacity_msg[] PROGMEM = "Disk capacity: %ldMiB\r\n";
const char ata_err_msg[] PROGMEM = "ATA error %02x\r\n";
const char file_read_err_msg[] PROGMEM = "File read error %d\r\n";
const char file_open_err_msg[] PROGMEM = "Error opening file \"%s\": %d\r\n";
PGM_P const tune_folders[] PROGMEM = {t1, t2, t3, t4};
const char t5[] PROGMEM = "Selected: SID\r\n";
const char t6[] PROGMEM = "Selected: SN76489\r\n";
const char t7[] PROGMEM = "Selected: AY8913\r\n";
const char t8[] PROGMEM = "Selected: TBB1143\r\n";
PGM_P const chip_names[] PROGMEM = {t5, t6, t7, t8};
volatile uint8_t serial_operation = 0;
volatile uint8_t buffer_check_req = 0;

inline void snd_set_data(uint8_t data) {
	if(sel == SEL_TBB) {
		PORTC &= 0b11000011;
		PORTC |= (data & 15) << 2;
	}else {
		PORTC = data;
		PORTD &= 0x7F;
		if((data & 64) != 0) PORTD |= (1 << PD7);
	}
}

void snd_delay() {
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
}

void snd_write(uint8_t addr, uint8_t data) {
	if(sel == SEL_AY) snd_set_data(addr);
	else if(sel == SEL_SN) snd_set_data(data);
	switch(sel) {
		case SEL_SID:
			PORTA = addr + (1 << PA7);
			DDRC |= 0b10111111;
			DDRD |= (1 << PD7);
			break;
		case SEL_SN:
			break;
		case SEL_AY:
			PORTA |= (1 << PA7);
			asm volatile("nop");
			asm volatile("nop");
			asm volatile("nop");
			PORTA |= (1 << PA6);
			snd_delay();
			snd_delay();
			PORTA &= 0b00111111;
			break;
		case SEL_TBB:
			PORTC &= ~(1 << PC0);
			PORTC |= (1 << PC1);
			snd_delay();
			PORTC &= ~(1 << PC1);
			break;
	}
	snd_delay();
	if(sel != SEL_SN) snd_set_data(data);
	switch(sel) {
		case SEL_SID:
			PORTB &= ~(1 << PB0);
			snd_delay();
			PORTB |= (1 << PB0);
			PORTA |= (1 << PA6);
			DDRC &= 0b01000000;
			DDRD &= ~(1 << PD7);
			break;
		case SEL_SN:
			PORTA &= ~(1 << PA6);
			snd_delay();
			snd_delay();
			snd_delay();
			snd_delay();
			PORTA |= (1 << PA6);
			snd_delay();
			snd_delay();
			break;
		case SEL_AY:
			PORTA |= (1 << PA6);
			snd_delay();
			snd_delay();
			PORTA &= 0b00111111;
			break;
		case SEL_TBB:
			PORTC |= (1 << PC0) | (1 << PC1);
			snd_delay();
			PORTC &= ~(1 << PC1);
			break;
	}
	snd_delay();
}

void snd_silence() {
	switch(sel) {
		case SEL_SID:
			snd_write(24, 128);
			snd_write(23, 0);
			snd_write(4, 0);
			snd_write(11, 0);
			snd_write(18, 0);
			break;
		case SEL_SN:
			snd_write(0, 0b10011111);
			snd_write(0, 0b10111111);
			snd_write(0, 0b11011111);
			snd_write(0, 0b11111111);
			break;
		case SEL_AY:
			snd_write(0x7, 0);
			snd_write(0x8, 0);
			snd_write(0x9, 0);
			snd_write(0xA, 0);
			break;
		case SEL_TBB:
			snd_write(15, 0);
			break;
	}
	_delay_us(2.2);
}

uint8_t fill_buffer(uint8_t* where) {
	if(!serial_operation) {
		UINT br;
		return f_read(&sndFile, where, 256, &br);
	}
	writechar('a');
	for(int i = 0; i < 256; i++) {
		while(!(UCSRA & (1<<RXC)));
		where[i] = UDR;
	}
	writechar('b');
	return FR_OK;
}

void check_buffer() {
	uint8_t ferr = FR_OK;
	if((bmask == 0 && buffer_pos >= 256) || bmask == 2) {
		bmask = 1;
		ferr = fill_buffer(disk_buff);
	}else if(bmask == 1 && buffer_pos < 256) {
		bmask = 0;
		ferr = fill_buffer(disk_buff + 256);
	}
	if(ferr != FR_OK) {
		cli();
		snd_silence();
		strcpy_P((char*)disk_buff, file_read_err_msg);
		printf((char*)disk_buff, ferr);
		while(1) _delay_ms(8);
	}
}

ISR(TIMER1_COMPA_vect, ISR_BLOCK) {
	OCR1A = 0xFFFF;
	if(!playing) return;
	uint16_t br = 0;
	uint8_t reg = FR_OK;
	uint8_t dat;
	if(bmask == 2) {
		buffer_check_req = 1;
		return;
	}
	while(1) {
		reg = disk_buff[buffer_pos++];
		dat = disk_buff[buffer_pos++];
		//Advancing through the buffer by an even stride means
		//the index will never surpass 511 in-between the two reads above
		buffer_pos &= 511;
		if(reg == 255) {
			//Track over
			playing = 0;
			snd_silence();
			return;
		}
		if(reg == 254) {
			//End of frame
			br = disk_buff[buffer_pos++];
			br <<= 8;
			br |= disk_buff[buffer_pos++];
			buffer_pos &= 511;
			buffer_check_req = 1;
			if(TCNT1 > br) {
				OCR1A = TCNT1 + 8;
			}else OCR1A = br;
			return;
		}
		snd_write(reg, dat);
	}
}

void stream_main() {
	printf("Strem mode\r\n");
	while(1) {
		stereo = readchar() - 50;
		if(stereo) set_stereo();
		else set_mono();
		snd_silence();
		//uint8_t reg, dat;
		serial_operation = 1;
		fill_buffer(disk_buff);
		fill_buffer(disk_buff + 256);
		/*while(1) {
			for(int i = 0; i < 512; i++) {
				if((i & 15) == 0) {
					writechar('\r');
					writechar('\n');
				}
				printf("%02x ", disk_buff[i]);
			}
			writechar('\r');
			writechar('\n');
		}*/
		bmask = 0;
		buffer_check_req = 0;
		buffer_pos = 0;
		playing = 1;
		while(playing) {
			//if(buffer_check_req) {
				check_buffer();
				buffer_check_req = 0;
			//}
			//reg = readchar();
			//dat = readchar();
			//if(reg == 255) break;
			//snd_write(reg, dat);
		}
		snd_silence();
		while(readchar() != 'a');
	}
}

int main(void) {
	DDRB = 0b00001111;
	PORTB = 0b00000001;
	DDRD = 0b01111110;
	PORTD = 0b01111010;
	TCCR0 = (1 << WGM01) | (1 << COM00) | (1 << CS00);
	OCR0 = 4;
	DDRA = PORTA = 0;
	DDRC = PORTC = 0;
	UINT br;
	
	UBRRH = 0;
	UBRRL = 10; //230400
	UCSRA = (1 << U2X);
	UCSRC = (1 << UCSZ1) | (1 << UCSZ0) | (1 << URSEL);
	UCSRB = (1 << RXEN) | (1 << TXEN);
	_delay_ms(25);
	PORTD |= (1 << PD2);
	for(uint8_t i = 0; i < 25; i++) _delay_ms(100);
	
	//UART IO
	{
		static FILE uart_str = FDEV_SETUP_STREAM(uart_putchar, uart_getchar, _FDEV_SETUP_RW);
		stdout = stderr = &uart_str;
	}
	for(int i = 0; i < 100; i++) _delay_ms(10);
	
	DDRA = PORTA = 0xFF;
	
	sel = (PINB >> 4) & 3;
	
	if(sel == SEL_TBB) {
		//Needs clock on PD7
		DDRD |= (1 << PD7);
		TCCR2 = (1 << WGM21) | (1 << COM20) | (1 << CS20);
		OCR2 = 0;
	}
	
	switch(sel) {
		case SEL_SID:
			DDRC = 0;
			break;
		case SEL_AY:
			DDRC = 0xFF;
			break;
		case SEL_SN:
			DDRC = 0xFF;
			break;
		case SEL_TBB:
			PORTC = 0;
			DDRC = 0xFF;
			break;
	}
	
	snd_silence();
	strcpy_P((char*)disk_buff, (PGM_P)pgm_read_word(&(chip_names[sel])));
	puts((char*)disk_buff);
	
	playing = 0;
	cli();
	TCCR1A = 0;
	TCCR1B = (1 << WGM12) | (1 << CS11);
	OCR1A = 0xFFFF;
	TIMSK = (1 << OCIE1A);
	sei();

	if(readchar() == 'a') {
		stream_main();
		while(1);
	}
	
	{
		err_ret = ata_init();
		if(err_ret) {
			strcpy_P((char*)disk_buff, ata_err_msg);
			printf((char*)disk_buff, err_ret);
			goto end;
		}
		uint32_t sectorCount = ata_getSectorCount();
		strcpy_P((char*)disk_buff, disk_capacity_msg);
		printf((char*)disk_buff, sectorCount / 2 / 1024);
	}
	
	err_ret = f_mount(&fs, "", 1);
	if(err_ret != FR_OK) {
		strcpy_P((char*)disk_buff, mount_err_msg);
		printf((char*)disk_buff, err_ret);
		goto end;
	}
	
	strcpy_P((char*)disk_buff, (PGM_P)pgm_read_word(&(tune_folders[sel])));
	err_ret = strlen((char*)disk_buff);
	sprintf((char*)disk_buff + err_ret, "test.bin");
	err_ret = f_open(&sndFile, (char*)disk_buff, FA_READ);
	if(err_ret != FR_OK) {
		strcpy_P((char*)disk_buff+256, file_open_err_msg);
		printf((char*)disk_buff+256, disk_buff, err_ret);
		goto unmount_end;
	}
	
	err_ret = f_read(&sndFile, &stereo, 1, &br);
	if(err_ret != FR_OK || br != 1) {
		strcpy_P((char*)disk_buff, file_read_err_msg);
		printf((char*)disk_buff, err_ret);
		goto unmount_end;
	}
	if(stereo) set_stereo();
	else set_mono();
	
	if(sel == SEL_SID) {
		for(int i = 0; i < 64; i++) snd_write(i, 0);
	}
	
	bmask = 2;
	buffer_pos = 0;
	playing = 1;
	
	while(playing) {
		asm volatile("nop");
		asm volatile("nop");
		if(buffer_check_req) {
			check_buffer();
			buffer_check_req = 0;
		}
	}
	
	err_ret = f_close(&sndFile);
	
	unmount_end:
	err_ret = f_unmount("");
	if(err_ret != FR_OK) {
		strcpy_P((char*)disk_buff, umount_err_msg);
		printf((char*)disk_buff, err_ret);
	}
	end:
	while(1) {
		_delay_ms(8);
	}
}
