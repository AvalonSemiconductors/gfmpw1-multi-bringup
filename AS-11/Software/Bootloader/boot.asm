; The first program the CPU executes after starting up
; Contains a simple memory monitor and SPI flash bootloader
; Boots up into the memory monitor, but pressing the "Run/Halt" button will execute the SPI flash bootloader by default

DDRA equ $00
PORTA equ $01
PINA equ $02
INTA equ $03
T0PRE equ $04
T1PRE equ $05
TTOP0 equ $06
TTOP1 equ $07
TMR0 equ $08
TMR1 equ $09
TINT equ $0A
SDIV equ $0B
SDR equ $0C
SBYS equ $0D
UDIV equ $0E
UDR equ $0F
UBSY equ $10

F_CLK equ 10000000
UDIV_VAL equ (F_CLK / 9600) + 1

	org $0000
_start:
	jmp _avoid
	dw 0
	jmp serial_bootloader
	dw 0
_avoid:
	clr r6
	dec r6
	dec r6
	; Switch to highest priority
	mov #$00E0,r1
	mtps r1
	nop
	mov #ivb,r0
	svb
	; Store processor type
	mftp
	mov r0,10
	; Port dirs and initial data
	mov #DDRA,r1
	mov #%1101101,r2
	iow r2,r1
	mov #PORTA,r1
	mov #1,r2
	iow r2,r1
	; Serial port clock divs
	mov #SDIV,r1
	mov #2,r2
	iow r2,r1
	mov #UDIV,r1
	mov #UDIV_VAL,r2
	iow r2,r1
	mov #0,data_val
	mov #end_of_programm,address_val ; Default address value is the first unused address in memory
	; Set up regular timer interrupt
	mov #T0PRE,r1
	mov #10000,r2
	iow r2,r1
	mov #TTOP0,r1
	mov #40,r2
	iow r2,r1
	mov #TMR0,r1
	mov #0,r2
	iow r2,r1
	mov #TINT,r1
	mov #1,r2
	iow r2,r1
	; Emulate irq7 to enter memory monitor
	mov #0,-(r6)
	mov #6,-(r6) ; Default return location is the jump to the serial bootloader
	jmp irq7

; Checks if the values in address_val, data_val have changed, and initiates a panel_update if they have
panel_change_check:
	cmp address_val,address_val_old
	bne panel_change_succeed
	cmp data_val,data_val_old
	bne panel_change_succeed
	rts r7
panel_change_succeed:
	jsr r7,panel_update
	rts r7

; Updates LED contents with address_val, data_val
; And pulls states of buttons and input switches to input_switches and button_states
panel_update:
	mov r1,-(r6)
	mov r2,-(r6)
	mov address_val,address_val_old
	mov data_val,data_val_old
	; Pulse parallel load
	mov #PORTA,r1
	ior r2,r1
	bic #1,r2
	iow r2,r1
	bis #1,r2
	iow r2,r1
	
	mov r4,-(r6)
	mov r5,-(r6)
	mov address_val,r5
	jsr r7,panel_oneword
	mov r4,r3
	mov r4,r5
	bic #$FF00,r3
	bic #$0FFF,r4
	ash r4,#-4
	bic #$F0FF,r4
	add r4,r3
	bic #$F0FF,r5
	ash r5,#4
	add r5,r3
	mov r3,input_switches
	mov data_val,r5
	jsr r7,panel_oneword
	swab r4
	com r4
	mov r4,button_states
	
	; Additionally, read state of run/halt button
	mov #PINA,r1
	ior r1,r1
	bitb #$10,r1
	beq runhalt_not_pressed
	add #4096,button_states
runhalt_not_pressed:
	
	mov (r6)+,r5
	mov (r6)+,r4
	mov (r6)+,r2
	mov (r6)+,r1
	rts r7

	; Exchanges one word with the shift registers
	; r5 = data to be shifted out
	; r4 = received data that was shifted in
panel_oneword:
	clr r4
	mov #16,r0
	mov #PORTA,r1
	mov #PINA,r3
panel_oneword_loop:
	asr r4
	bic #32768,r4
	ior r2,r3
	bit #2,r2
	bne panel_onebyte_no_bit
	bis #32768,r4
panel_onebyte_no_bit:
	ior r2,r1
	bic #(64+32),r2
	bit #32768,r5
	beq panel_onebyte_no_out
	bis #64,r2
panel_onebyte_no_out:
	iow r2,r1
	; Pulse bitclock
	bis #32,r2
	iow r2,r1
	bic #32,r2
	iow r2,r1
	add r5,r5
	sob r0,panel_oneword_loop
	rts r7

	dw 0
address_val: dw 0
data_val: dw 0
address_val_old: dw 0
data_val_old: dw 0
input_switches: dw 0
button_states: dw 0
button_edges: dw 0
last_act: dw 0

	align 32
ivb:
	dw 0 ; Reserved
	dw 0<<5
	dw irq1 ;IRQ1
	dw 1<<5
	dw 0 ;IRQ2
	dw 2<<5
	dw 0 ;IRQ3
	dw 3<<5
	dw 0 ;IRQ4
	dw 4<<5
	dw 0 ;IRQ5
	dw 5<<5
	dw 0 ;IRQ6
	dw 6<<5
	dw irq7 ;IRQ7
	dw (7<<5)+12

; Run/Halt Button
irq7:
	; Get PC as pushed on the stack and put it in a constant location
	mov (r6),4
	; Push all registers
	mov r0,-(r6)
	mov r1,-(r6)
	mov r2,-(r6)
	mov r3,-(r6)
	mov r4,-(r6)
	mov r5,-(r6)
	; Disable this interrupt
	mov #INTA,r1
	ior r2,r1
	bic #$0010,r2
	iow r2,r1
	; Misc. Setup
	mov #0,last_act
	bic #1,address_val
	mov #0,button_edges
	jsr r7,panel_update
	; Wait for Run/Halt to be released
	mov #PINA,r5
m_wait_rh_release:
	ior r4,r5
	bitb #$10,r4
	bne m_wait_rh_release
	jsr r7,panel_update
	; Set all button edges based on current state
	mov button_states,button_edges
	; Enter memory monitor loop
memory_mon_loop:
	;mov input_switches,address_val
	;mov button_states,data_val
	jsr r7,panel_update
	
	; Resume when Halt/Run is pressed & released (must be on release or else interrupt re-triggers)
	bit #4096,button_states
	bne not_resume
	bit #4096,button_edges
	bne resume
not_resume:
	bit #32768,button_states
	beq no_set_addr
	bit #32768,button_edges
	bne no_set_addr
b_set_addr:
	mov #0,last_act
	mov input_switches,address_val
	bic #1,address_val
	jmp no_write
no_set_addr:
	bit #16384,button_states
	beq no_inspect
	bit #16384,button_edges
	bne no_inspect
b_inspect:
	bit #1,last_act
	beq b_no_inc_address
	add #2,address_val
b_no_inc_address:
	mov #1,last_act
b_just_inspect:
	mov address_val,r3
	mov (r3),data_val
	jmp no_write
no_inspect:
	bit #8192,button_states
	beq no_write
	bit #8192,button_edges
	bne no_write
b_write:
	bit #2,last_act
	beq b_w_no_inc_address
	add #2,address_val
b_w_no_inc_address:
	mov #2,last_act
	mov address_val,r3
	mov input_switches,(r3)
	jmp b_just_inspect
no_write:
	mov button_states,button_edges
	
	mov #$2000,r2
short_del:
	nop
	nop
	sob r2,short_del
	jmp memory_mon_loop
resume:
	; Halt/Run pushed again, so resume execution
	mov #0,data_val
	mov #0,address_val
	; Re-enable this interrupt
	mov #INTA,r1
	iow r2,r1
	bis #$0010,r2
	iow r2,r1
	; Pop all registers
	mov (r6)+,r5
	mov (r6)+,r4
	mov (r6)+,r3
	mov (r6)+,r2
	mov (r6)+,r1
	mov (r6)+,r0
	; Move PC from constant location back onto stack
	mov 4,(r6)
	rtt

spi_short_del:
	mov r2,-(r6)
	mov #$0020,r2
wheeee:
	sob r2,wheeee
	mov (r6)+,r2
	rts r7

spi_exchange_r3:
	mov r1,-(r6)
	mov #SDR,r1
	iow r3,r1
	mov #SBYS,r1
spi_exchange_wait:
	ior r3,r1
	bit #3,r3
	bne spi_exchange_wait
	mov #SDR,r1
	ior r3,r1
	mov (r6)+,r1
	rts r7

	; Timer interrupt
irq1:
	; Push all registers
	mov r0,-(r6)
	mov r1,-(r6)
	mov r2,-(r6)
	mov r3,-(r6)
	mov r4,-(r6)
	mov r5,-(r6)
	;mov #TMR0,r0
	;mov #0,r2
	;iow r2,r0
	
	;inc data_val
	
	mov r0,data_val
	mov 12(r6),address_val
	jsr r7,panel_update
	
	; Pop all registers
	mov (r6)+,r5
	mov (r6)+,r4
	mov (r6)+,r3
	mov (r6)+,r2
	mov (r6)+,r1
	mov (r6)+,r0
	rti

error_out_r5:
	mov r5,r0
	mov #$0011,r2
error_del_1:
	wait
	sob r2,error_del_1
	mov #0,r0
	mov #$0011,r2
error_del_2:
	wait
	sob r2,error_del_2
	jmp error_out_r5

temp0: dw 0
serial_bootloader:
	mov #PORTA,r1
	ior r2,r1
	bic #$000C,r2
	mov r2,temp0
	iow r2,r1
	
	mov #$AAAA,r5
	jmp error_out_r5

	; First free memory word
end_of_programm:
	dw 0
