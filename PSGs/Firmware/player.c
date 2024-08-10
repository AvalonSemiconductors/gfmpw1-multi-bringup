#include <defs.h>
//#include <stub.h>


// --------------------------------------------------------
// Firmware routines
// --------------------------------------------------------

#define reg_mprj_counter (*(volatile uint32_t*)0x30040000)
#define reg_mprj_proj_sel (*(volatile uint32_t*)0x30080000)
#define reg_mprj_settings (*(volatile uint32_t*)0x30020000)
#define reg_mprj_sram (*(volatile uint32_t*)0x30010000)

#define SEL_SID 0
#define SEL_SN 1
#define SEL_AY 2
#define SEL_TBB 3

void configure_io(uint8_t sel) {

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
    reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
    reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;

    // -------------------------------------------

	if(sel == SEL_SID) {
		reg_mprj_io_5 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_6 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_7 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_8 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_9 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_10 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_11 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		reg_mprj_io_12 = GPIO_MODE_USER_STD_BIDIRECTIONAL;
		
		reg_mprj_io_13 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_14 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_15 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_16 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_17 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_18 = GPIO_MODE_USER_STD_INPUT_NOPULL;
    }else {
		reg_mprj_io_5 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_6 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_7 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_8 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_9 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_10 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_11 = GPIO_MODE_USER_STD_INPUT_NOPULL;
		reg_mprj_io_12 = sel == SEL_TBB ? GPIO_MODE_MGMT_STD_INPUT_NOPULL : GPIO_MODE_USER_STD_INPUT_NOPULL;
		
		reg_mprj_io_13 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_14 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_15 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_16 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_17 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
		reg_mprj_io_18 = GPIO_MODE_MGMT_STD_INPUT_NOPULL;
	}

    reg_mprj_io_19 = sel == SEL_TBB ? GPIO_MODE_MGMT_STD_INPUT_NOPULL : GPIO_MODE_USER_STD_INPUT_NOPULL;
    reg_mprj_io_20 = sel == SEL_SID || sel == SEL_AY ? GPIO_MODE_USER_STD_INPUT_NOPULL : GPIO_MODE_MGMT_STD_INPUT_NOPULL;
    reg_mprj_io_21 = sel == SEL_SID ? GPIO_MODE_USER_STD_INPUT_NOPULL : GPIO_MODE_MGMT_STD_INPUT_NOPULL;
    reg_mprj_io_22 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_23 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_24 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_25 = GPIO_MODE_USER_STD_OUTPUT;
    
    reg_mprj_io_26 = sel == SEL_AY ? GPIO_MODE_USER_STD_OUTPUT : GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_27 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_28 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_29 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_30 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_31 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    
    reg_mprj_io_32 = GPIO_MODE_MGMT_STD_OUTPUT;
    
    reg_mprj_io_33 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_34 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    reg_mprj_io_35 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
    
    reg_mprj_io_36 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_37 = GPIO_MODE_MGMT_STD_OUTPUT;

    // Initiate the serial transfer to configure IO
    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1);
    reg_mprj_datah = (sel << 4) | (1 << 31);
    reg_mprj_datal = 4;
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

void main() {
    reg_gpio_mode1 = 1;
    reg_gpio_mode0 = 0;
    reg_gpio_ien = 1;
    reg_gpio_oeb = 0;

    uint8_t sel = SEL_AY;

	reg_spictrl = (1 << 31) | (2 << 16); //Less wait states
    configure_io(sel);

    reg_spi_enable = 0;
    reg_uart_enable = 0;
    reg_wb_enable = 1;

    // Configure All LA probes as inputs to the cpu
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0x00000000;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0x00000000;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0x00000000;    // [127:96]
	
	switch(sel) {
		case SEL_SID:
			reg_mprj_proj_sel = 0b0001000;
			break;
		case SEL_SN:
			reg_mprj_proj_sel = 0b0001100;
			break;
		case SEL_AY:
			reg_mprj_proj_sel = 0b0011000;
			break;
		case SEL_TBB:
			reg_mprj_proj_sel = 0b0100000;
			break;
	}
	
	delay(2000);
	reg_mprj_datah = (sel << 4);
	
	while (1) {
        reg_gpio_out = 1; // OFF
		delay(2000000);

        reg_gpio_out = 0;  // ON
		delay(2000000);
    }
}

