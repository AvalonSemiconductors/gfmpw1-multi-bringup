#include <defs.h>

#include "baremetal_data.h"

// --------------------------------------------------------
// Firmware routines
// --------------------------------------------------------

#define reg_mprj_counter (*(volatile uint32_t*)0x30040000)
#define reg_mprj_proj_sel (*(volatile uint32_t*)0x30080000)
#define reg_mprj_settings (*(volatile uint32_t*)0x30020000)
#define reg_mprj_sram (*(volatile uint32_t*)0x30010000)

#define LE_LO (1 << 21)
#define LE_HI (1 << 22)
#define OEB (1 << 24)
#define WEBLO (1 << 25)
#define WEBHI (1 << 26)

void configure_io_coldboot(char dir) {
	reg_mprj_io_0 = GPIO_MODE_USER_STD_INPUT_NOPULL;
    reg_mprj_io_1 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_2 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_4 = GPIO_MODE_MGMT_STD_OUTPUT;
    
    if(dir) {
		reg_mprj_io_5 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_6 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_7 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_8 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_9 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_10 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_11 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_12 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_13 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_14 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_15 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_16 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_17 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_18 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_19 = GPIO_MODE_MGMT_STD_OUTPUT;
		reg_mprj_io_20 = GPIO_MODE_MGMT_STD_OUTPUT;
	}else {
		reg_mprj_io_5 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_6 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_7 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_8 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_9 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_10 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_11 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_12 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_13 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_14 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_15 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_16 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_17 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_18 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_19 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_20 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
	}
    
    reg_mprj_io_21 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_22 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_23 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_24 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_25 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_26 = GPIO_MODE_MGMT_STD_OUTPUT;
    
    reg_mprj_io_27 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_28 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_29 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_30 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_31 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_32 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_33 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_34 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_35 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_36 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_37 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    
    // Initiate the serial transfer to configure IO
    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1);
    reg_mprj_datah = 0;
    reg_mprj_datal = OEB | WEBLO | WEBHI | (1 << 4);
}

void configure_io_design() {

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

    reg_mprj_io_0 = GPIO_MODE_USER_STD_INPUT_NOPULL;

    // Changing configuration for IO[1-4] will interfere with programming flash. if you change them,
    // You may need to hold reset while powering up the board and initiating flash to keep the process
    // configuring these IO from their default values.

    reg_mprj_io_1 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_2 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;

    // -------------------------------------------

    reg_mprj_io_5 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_6 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_7 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_8 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_9 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_10 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_11 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_12 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_13 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_14 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_15 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_16 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_17 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_18 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_19 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_20 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    
    reg_mprj_io_21 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_22 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_23 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_24 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_25 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_26 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_27 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_28 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_29 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_30 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_31 = GPIO_MODE_USER_STD_INPUT_PULLUP;
    reg_mprj_io_32 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_33 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_34 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_35 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_36 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_37 = GPIO_MODE_USER_STD_BIDIRECTIONAL;

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
    reg_gpio_out = 1;
    
    reg_spictrl = (1 << 31) | (2 << 16); //Less wait states
    
    reg_spi_enable = 0;
    reg_uart_enable = 0;
    reg_wb_enable = 1;

	reg_mprj_settings = 2;
	reg_mprj_proj_sel = 0b0101001;

	configure_io_coldboot(1);
	uint32_t curr_addr = 0;
	uint32_t temp = 0;

	/*curr_addr = 0xAAAAAAAA;
	temp = ((curr_addr & 0xFFFF) << 5) | WEBLO | WEBHI | OEB | (1 << 4);
	reg_mprj_datal = temp | LE_LO;
	asm volatile("nop");
	reg_mprj_datal = temp;
	temp = ((curr_addr >> 16) << 5) | WEBLO | WEBHI | OEB | (1 << 4);
	reg_mprj_datal = temp | LE_HI;
	reg_mprj_datal = temp;
	configure_io_coldboot(0);
	reg_mprj_datal = temp & ~OEB;

	while(1);*/

    uint32_t pgmval = 0;
	for(uint32_t i = 0; i < pgm_len * 2; i++) {
		temp = ((curr_addr & 0xFFFF) << 5) | WEBLO | WEBHI | OEB | (1 << 4);
		reg_mprj_datal = temp | LE_LO;
		asm volatile("nop");
		reg_mprj_datal = temp;
		if((curr_addr & 0x0000FFFF) == 0) {
			temp = ((curr_addr >> 16) << 5) | WEBLO | WEBHI | OEB | (1 << 4);
			reg_mprj_datal = temp | LE_HI;
			reg_mprj_datal = temp;
		}
		curr_addr++;
		
        pgmval = pgm[i >> 1];
        if((i & 1) != 0) pgmval >>= 16;
        pgmval &= 0xFFFF;
		temp = (pgmval << 5) | OEB | (1 << 4);
		reg_mprj_datal = temp;
		asm volatile("nop");
		reg_mprj_datal = temp | WEBLO | WEBHI;
	}
	/*uint32_t curr_addr = 0;
	uint32_t temp;
	while(1) {
		temp = curr_addr & 0xFFFD;
		temp <<= 5;
		temp |= WEBLO | WEBHI | OEB | (1 << 4);
		reg_mprj_datal = (temp | LE_LO);
		reg_mprj_datal = temp;
		if((curr_addr & 0x0000FFFF) == 0) {
			temp = ((curr_addr >> 16) << 5) | WEBLO | WEBHI | OEB | (1 << 4);
			reg_mprj_datal = temp | LE_HI;
			reg_mprj_datal = temp;
		}
		curr_addr++;
	}*/
    configure_io_design();

    // Configure All LA probes as inputs to the cpu
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0x00000000;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0x00000000;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0x00000000;    // [127:96]

	reg_mprj_proj_sel = 0b0101000;
	delay(2000000);
	
	while (1) {
		delay(4500000);
        reg_mprj_datal = 4;
		delay(4500000);
        reg_mprj_datal = 0;
    }
}

