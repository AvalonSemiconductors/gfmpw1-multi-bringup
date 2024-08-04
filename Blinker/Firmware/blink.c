#include <defs.h>
//#include <stub.h>


// --------------------------------------------------------
// Firmware routines
// --------------------------------------------------------

#define reg_mprj_counter (*(volatile uint32_t*)0x30040000)
#define reg_mprj_proj_sel (*(volatile uint32_t*)0x30080000)
#define reg_mprj_settings (*(volatile uint32_t*)0x30020000)
#define reg_mprj_sram (*(volatile uint32_t*)0x30010000)

int putchar(int c) {
	reg_uart_data = c;
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

void configure_io() {

//  ======= Useful GPIO mode values =============

//      GPIO_MODE_MGMT_STD_INPUT_NOPULL
//      GPIO_MODE_MGMT_STD_INPUT_PULLDOWN
//      GPIO_MODE_MGMT_STD_INPUT_PULLUP
//      GPIO_MODE_MGMT_STD_OUTPUT
//      GPIO_MODE_MGMT_STD_BIDIRECTIONAL
//      GPIO_MODE_MGMT_STD_ANALOG

//      GPIO_MODE_USER_STD_INPUT_NOPULL
//      GPIO_MODE_USER_STD_INPUT_PULLDOWN
//      GPIO_MODE_USER_STD_INPUT_PULLUP
//      GPIO_MODE_USER_STD_OUTPUT
//      GPIO_MODE_USER_STD_BIDIRECTIONAL
//      GPIO_MODE_USER_STD_ANALOG


//  ======= set each IO to the desired configuration =============

    //  GPIO 0 is turned off to prevent toggling the debug pin; For debug, make this an output and
    //  drive it externally to ground.

    reg_mprj_io_0 = GPIO_MODE_USER_STD_INPUT_PULLUP;

    // Changing configuration for IO[1-4] will interfere with programming flash. if you change them,
    // You may need to hold reset while powering up the board and initiating flash to keep the process
    // configuring these IO from their default values.

    reg_mprj_io_1 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_2 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
    reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;

    // -------------------------------------------

    reg_mprj_io_5 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;     // UART Rx
    reg_mprj_io_6 = GPIO_MODE_MGMT_STD_OUTPUT;           // UART Tx
    reg_mprj_io_7 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_8 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_9 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_10 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_11 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_12 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_13 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_14 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_15 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_16 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_17 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_18 = GPIO_MODE_USER_STD_INPUT_PULLUP;

    reg_mprj_io_19 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_20 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_21 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_22 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_23 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_24 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_25 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_26 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_27 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_28 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_29 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_30 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_31 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_32 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_33 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_34 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_35 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_36 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_37 = GPIO_MODE_USER_STD_INPUT_PULLUP;

    // Initiate the serial transfer to configure IO
    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1);
    reg_mprj_datah = 0;
    reg_mprj_datal = 0;
}

void delay(const uint32_t d) {
	//reg_mprj_counter = 0;
	//uint32_t read = 0;
	//while(read < d) read = reg_mprj_counter;
    /* Configure timer for a single-shot countdown */
	reg_timer0_config = 0;
	reg_timer0_data = d;
    reg_timer0_config = 1;

    // Loop, waiting for value to reach zero
   reg_timer0_update = 1;  // latch current value
   while (reg_timer0_value > 0) {
           reg_timer0_update = 1;
   }
}

void main()
{
	int i, j, k;

    reg_gpio_mode1 = 1;
    reg_gpio_mode0 = 0;
    reg_gpio_ien = 1;
    reg_gpio_oeb = 0;

	reg_spictrl = (1 << 31) | (2 << 16); //Less wait states
    configure_io();

    reg_spi_enable = 0;
    reg_uart_enable = 1;
    reg_wb_enable = 1;

    // Configure All LA probes as inputs to the cpu
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0x00000000;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0x00000000;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0x00000000;    // [127:96]

	reg_mprj_proj_sel = 0b0000100;
	//reg_mprj_settings = (10000000/115200)-1;
	//reg_mprj_proj_sel = 0b0011100;
	delay(2000000);
	
	while (1) {

        reg_gpio_out = 1; // OFF
		delay(2000000);
        reg_mprj_datal = 4;

        reg_gpio_out = 0;  // ON
		delay(2000000);
		puthex32(reg_hkspi_user_id);
		newl();
        reg_mprj_datal = 0;

    }


}

