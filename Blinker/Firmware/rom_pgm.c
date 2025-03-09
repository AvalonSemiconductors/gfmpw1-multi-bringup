#include <defs.h>

#define WEB (1 << 1)
#define OEB (1 << 2)

uint32_t datal_shadow;
uint32_t datah_shadow;

#define reg_uart_rxempty (*(volatile uint32_t*) CSR_UART_RXEMPTY_ADDR)
#define reg_uart_evpending (*(volatile uint32_t*) CSR_UART_EV_PENDING_ADDR)

void configure_io(uint8_t input) {
	reg_mprj_io_0 = GPIO_MODE_MGMT_STD_OUTPUT;
	reg_mprj_io_1 = GPIO_MODE_MGMT_STD_OUTPUT; //WEb
	reg_mprj_io_2 = GPIO_MODE_MGMT_STD_OUTPUT; //OEb
	reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
	reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_5 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;     // UART Rx
	reg_mprj_io_6 = GPIO_MODE_MGMT_STD_OUTPUT;           // UART Tx
	reg_mprj_io_7 = GPIO_MODE_MGMT_STD_OUTPUT; //A6
	reg_mprj_io_8 = input ? GPIO_MODE_MGMT_STD_INPUT_PULLDOWN : GPIO_MODE_MGMT_STD_OUTPUT; //D3
	reg_mprj_io_9 = input ? GPIO_MODE_MGMT_STD_INPUT_PULLDOWN : GPIO_MODE_MGMT_STD_OUTPUT; //D1
	reg_mprj_io_10 = GPIO_MODE_MGMT_STD_OUTPUT; //A10
	reg_mprj_io_11 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_12 = GPIO_MODE_MGMT_STD_OUTPUT; //A0
	reg_mprj_io_13 = GPIO_MODE_MGMT_STD_OUTPUT; //A1
	reg_mprj_io_14 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_15 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_16 = GPIO_MODE_MGMT_STD_OUTPUT; //A2
	reg_mprj_io_17 = GPIO_MODE_MGMT_STD_OUTPUT; //A3
	reg_mprj_io_18 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;

	reg_mprj_io_19 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_20 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_21 = GPIO_MODE_MGMT_STD_OUTPUT; //A4
	reg_mprj_io_22 = GPIO_MODE_MGMT_STD_OUTPUT; //A5
	reg_mprj_io_23 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_24 = GPIO_MODE_MGMT_STD_OUTPUT; //A7
	reg_mprj_io_25 = GPIO_MODE_MGMT_STD_OUTPUT; //A8
	reg_mprj_io_26 = GPIO_MODE_MGMT_STD_OUTPUT; //A9
	reg_mprj_io_27 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_28 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_29 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	if(!input) {
		reg_mprj_io_30 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_31 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_32 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_33 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_34 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_35 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_36 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_37 = GPIO_MODE_MGMT_STD_OUTPUT;
	}else {
		reg_mprj_io_30 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_31 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_32 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_33 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_34 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_35 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_36 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
		reg_mprj_io_37 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	}

	reg_mprj_xfer = 1;
	while (reg_mprj_xfer == 1);
}

void delay(const int d) {
	reg_timer0_config = 0;
	reg_timer0_data = d;
	reg_timer0_config = 1;
	reg_timer0_update = 1;
	while (reg_timer0_value > 0) reg_timer0_update = 1;
}

int putchar(int c) {
	reg_uart_data = c;
	while(reg_uart_txfull == 1);
	return c;
}

void puts(const char *s) {
	while(*s) {
		putchar(*s);
		s++;
	}
}

void puthex_nibble(unsigned char c) {
	if(c >= 10) putchar('A' + (c - 10));
	else putchar('0' + c);
}

void puthex(unsigned char c) {
	puthex_nibble(c >> 4);
	puthex_nibble(c & 15);
}

void puthex16(uint32_t a) {
	puthex(a >> 8);
	puthex(a);
}

void puthex32(uint32_t a) {
	puthex(a >> 24);
	puthex(a >> 16);
	puthex(a >> 8);
	puthex(a);
}

void newl() {
	putchar('\r');
	putchar('\n');
}

void set_data(uint32_t data) {
	data &= 0xFF;
	datah_shadow = data >> 2;
	datal_shadow &= ~((1 << 9) | (1 << 8) | (1 << 30));
	if((data & 2) != 0) datal_shadow |= 1 << 9;
	if((data & 8) != 0) datal_shadow |= 1 << 8;
	if((data & 1) != 0) datal_shadow |= 1 << 30;
	reg_mprj_datah = datah_shadow;
	reg_mprj_datal = datal_shadow;
}

uint32_t get_data() {
	uint32_t reading = reg_mprj_datah;
	uint32_t res = (reading & 0x3D) << 2;
	reading = reg_mprj_datal;
	if((reading & (1 << 9)) != 0) res |= 2;
	if((reading & (1 << 8)) != 0) res |= 8;
	if((reading & (1 << 30)) != 0) res |= 1;
	return res;
}

void set_address(uint32_t addr) {
	addr &= 0x7FF;
	datal_shadow &= ~((1 << 7) | (1 << 10) | (3 << 12) | (3 << 16) | (63 << 21));
	if((addr & (1 << 10)) != 0) datal_shadow |= 1 << 10;
	if((addr & (1 << 6)) != 0) datal_shadow |= 1 << 7;
	uint32_t temp = addr & 0x003;
	datal_shadow |= temp << 12;
	temp = (addr >> 2) & 0x003;
	datal_shadow |= temp << 16;
	temp = (addr >> 4) & 0x03B;
	datal_shadow |= temp << 21;
	reg_mprj_datal = datal_shadow;
}

uint32_t wait_for_char() {
	while(reg_uart_rxempty == 1) {}
	uint32_t res = reg_uart_data;
	reg_uart_evpending = 3;
	reg_uart_irq_en = 0;
	return res;
}

void program_function(void);
void dump_function(void);

void main() {
    reg_gpio_mode1 = 1;
    reg_gpio_mode0 = 0;
    reg_gpio_ien = 1;
    reg_gpio_oeb = 0;
    reg_gpio_out = 0;

    datah_shadow = reg_mprj_datah = 0;
    datal_shadow = reg_mprj_datal = (1 << 3) | WEB | OEB;
	configure_io(1);
	reg_spictrl = (1 << 31) | (2 << 16); //Less wait states
    reg_uart_enable = 1;
    reg_wb_enable = 1;
    reg_hkspi_disable = 1;
    
    // Configure All LA probes as inputs to the cpu
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0x00000000;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0x00000000;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0x00000000;    // [127:96]
	
	reg_spi_enable = 0;
	reg_gpio_out = 1;
	delay(5000000);
	
	for(int i = 0; i < 6; i++) {
        reg_gpio_out = 0; // OFF
        reg_mprj_datal = 0xaaaaaaaF;
		delay(3000000);
        reg_gpio_out = 1;  // ON
        reg_mprj_datal = 0x5555555F;
		delay(750000);
    }
    reg_mprj_datal = datal_shadow;
    reg_mprj_datah = datah_shadow;
    reg_gpio_out = 0;
    
    /*uint32_t ct = 0;
    while(1) {
		set_address(ct++);
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
	}*/
    
    puts("Caravel ROM Programmer Thingy\r\nPress '1' for 28C16\r\n");
    uint32_t rec;
    while(1) {
		rec = wait_for_char();
		if(rec == '1') break;
	}
	puts("Press 'r' to dump the ROM contents\r\n\r\n");
	while(1) {
		rec = wait_for_char();
		if(rec == 'p') {
			//puts("program_function\r\n");
			program_function();
			break;
		}else if(rec == 'r') {
			//puts("dump_function\r\n");
			dump_function();
			break;
		}
	}
	
	datal_shadow |= OEB | WEB;
	reg_mprj_datal = datal_shadow;
	reg_mprj_datah = datah_shadow = 0;
	configure_io(1);
	while(1) {
		reg_gpio_out = 0;
		delay(3000000);
		reg_gpio_out = 1;
		delay(750000);
	}
}

void program_function(void) {
	putchar('a');
	datal_shadow |= WEB | OEB;
	reg_mprj_datal = datal_shadow;
	configure_io(0);
    uint32_t len = wait_for_char() - 'A';
    len |= (wait_for_char() - 'A') << 4;
    len |= (wait_for_char() - 'A') << 8;
    len |= (wait_for_char() - 'A') << 12;
    if(len > 2048) len = 2048;
    uint32_t val;
    for(uint16_t i = 0; i < len; i++) {
		set_address(i);
		putchar('n');
		val = wait_for_char();
		set_data(val);
		//set_data(i & 0xFF);
		datal_shadow &= ~WEB;
		reg_mprj_datal = datal_shadow;
		datal_shadow |= WEB;
		reg_mprj_datal = datal_shadow;
		delay(11000);
	}
	putchar('d');
	datal_shadow |= WEB | OEB;
	reg_mprj_datal = datal_shadow;
	configure_io(1);
	datal_shadow &= ~OEB;
	reg_mprj_datal = datal_shadow;
	set_address(0);
	delay(1111);
	for(uint16_t i = 0; i < len; i++) {
		set_address(i);
		wait_for_char();
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		val = get_data();
        putchar((val & 15) + 48);
        putchar((val >> 4) + 48);
	}
	datal_shadow |= WEB | OEB;
	reg_mprj_datal = datal_shadow;
}

void dump_function(void) {
	configure_io(1);
	datal_shadow &= ~OEB;
	reg_mprj_datal = datal_shadow;
	set_address(0);
	delay(1111);
	uint8_t idx;
	for(uint16_t i = 0; i < 2048; i++) {
		set_address(i);
		idx = i % 16;
		if(idx == 0) {
			newl();
			puthex16(i);
			putchar(' ');
			putchar('|');
			putchar(' ');
			reg_gpio_out = (i & 32) == 0;
		}
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		asm volatile("nop");
		puthex(get_data());
		putchar(' ');
	}
	newl();
	datal_shadow |= OEB;
	reg_mprj_datal = datal_shadow;
	reg_gpio_out = 0;
}
