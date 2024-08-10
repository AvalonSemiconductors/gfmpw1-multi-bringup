.org 0
#.section .text
.globl _start

# IOR with address in r1 and value to r2
.equ iorr1r2, 0b0111101001000010
# IOW with address in r1 and value from r2
.equ iowr1r2, 0b0111110001000010
# IOR with address in r3 and value to r2
.equ iorr3r2, 0b0111101011000010

# MFPT instruction
.equ mftp, 0b0000000000000111

.equ DDRA, 0x00
.equ PORTA, 0x01
.equ PINA, 0x02
.equ SDIV, 0x0B
.equ UDIV, 0x0E

.equ F_CLK, 10000000
.equ FDIV_VAL, F_CLK / 9600

_start:
	nop
	clr sp
	dec sp
	dec sp
	# Port dirs and initial data
	mov $DDRA,r1
	mov $0b1101101,r2
	.word iowr1r2
	mov $PORTA,r1
	mov $1,r2
	.word iowr1r2
	# Serial port clock divs
	mov $SDIV,r1
	mov $2,r2
	.word iowr1r2
	mov $UDIV,r1
	mov $FDIV_VAL,r2
	.word iowr1r2

loop:
	mov input_switches,address_val-2
	mov button_states,data_val-2
	jsr pc,panel_update
short_del:
	nop
	nop
	sob r2,short_del
	jmp loop
#_loop:
#	mov $0xFFFF,r2
#_delay_loop:
#	nop
#	sob r2,_delay_loop
#	mov $PORTA,r1
#	.word iorr1r2
#	mov $32,r3
#	xor r3,r2
#	.word iowr1r2
#	jmp _loop

panel_update:
	mov r1,-(sp)
	mov r2,-(sp)
	# Pulse parallel load
	mov $PORTA,r1
	.word iorr1r2
	bic $1,r2
	.word iowr1r2
	bis $1,r2
	.word iowr1r2
	
	mov r4,-(sp)
	mov r5,-(sp)
	mov address_val,r5
	jsr pc,panel_oneword
	mov r4,r3
	mov r4,r5
	bic $0xFF00,r3
	bic $0x0FFF,r4
	ash $-4,r4
	bic $0xF0FF,r4
	add r4,r3
	bic $0xF0FF,r5
	ash $4,r5
	add r5,r3
	mov r3,input_switches
	mov data_val,r5
	jsr pc,panel_oneword
	swab r4
	com r4
	mov r4,button_states
	
	mov (sp)+,r5
	mov (sp)+,r4
	mov (sp)+,r2
	mov (sp)+,r1
	rts pc

	# Exchanges one word with the shift registers
	# r5 = data to be shifted out
	# r4 = received data that was shifted in
panel_oneword:
	clr r4
	mov $16,r0
	mov $PORTA,r1
	mov $PINA,r3
panel_oneword_loop:
	asr r4
	bic $32768,r4
	.word iorr3r2
	bit $2,r2
	bne panel_onebyte_no_bit
	bis $32768,r4
panel_onebyte_no_bit:
	.word iorr1r2
	bic $(64+32),r2
	bit $32768,r5
	beq panel_onebyte_no_out
	bis $64,r2
panel_onebyte_no_out:
	.word iowr1r2
	# Pulse bitclock
	bis $32,r2
	.word iowr1r2
	bic $32,r2
	.word iowr1r2
	add r5,r5
	sob r0,panel_oneword_loop
	rts pc

.word 0
address_val: .word 0
data_val: .word 0
input_switches: .word 0
button_states: .word 0
