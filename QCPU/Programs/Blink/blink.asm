DDRA equ $00
PORTA equ $01
DDRB equ $02
PORTB equ $03
PINA equ $04
PINB equ $05
UDIVL equ $06
UDIVH equ $07
UDR equ $08
SSTAT equ $09
SDIV equ $0A
SDR equ $0B
TDIV equ $0C
CAPTURE equ $0D
TCAPTL equ $0E
TCAPTH equ $0F
TSET equ $10
TTOPL equ $11
TTOPH equ $12
PW equ $13
FDIVL equ $14
FDIVH equ $15

MEM_SIZE equ $40

COUNTER equ $05
DIGITS_BUFF equ $07

start:
	j main
int_vec:
	rti
trupt_vec:
	rti
main:
	; PORTA as outputs, initialized to 0
	ioa r0
	ldi r1,#$FF
	out r1
	ioa #DDRB
	ldi r1,#$30
	out r1
	ioa #PORTB
	ldi r1,#$10
	out r1
	
	ldi r15,#MEM_SIZE-1
	
	; Timer prescaler
	ioa #TDIV
	ldi r1,#$F0
	out r1
	; Timer top (0xFEFE)
	ioa #TTOPL
	ldi r1,#$FE
	out r1
	ioa #TTOPH
	out r1
	; UART clock divider (for 115200 @ 27MHz)
	ioa #UDIVH
	out r0
	ioa #UDIVL
	ldi r1,#233
	out r1
	
	ldi r5,#5
startup_del_loop:
	call bit_delay
	sub r5,#1
	bnz startup_del_loop
	
	ldi r5,#255
	st r5,r0(DIGITS_BUFF)
	st r5,r0(DIGITS_BUFF+1)
	st r5,r0(DIGITS_BUFF+2)
	st r5,r0(DIGITS_BUFF+3)
	call write_digits
	ldi r5,#255
startup_del_loop2
	call bit_delay
	call bit_delay
	sub r5,#1
	bnz startup_del_loop2
	
	ldi r9,#0
	ldi r10,#0
loop:
	st r9,r0(COUNTER)
	st r10,r0(COUNTER+1)
	
	ldi r12,#4
	ldi r13,#0
tohex_repeat:
	ld r5,r13(COUNTER)
	ldi r6,#15
	and r5,r6
	ldi r3,#digit_lut>>8
	ldi r2,#digit_lut&255
	add r2,r5
	adc r3,#0
	ldc
	st r2,r12(DIGITS_BUFF-1)
	ld r5,r13(COUNTER)
	sr r5
	sr r5
	sr r5
	sr r5
	ldi r3,#digit_lut>>8
	ldi r2,#digit_lut&255
	add r2,r5
	adc r3,#0
	ldc
	st r1,r12(DIGITS_BUFF-2)
	
	add r13,#1
	sub r12,#2
	bnz tohex_repeat
	
	ld r5,r0(COUNTER)
	sr r5
	sr r5
	sr r5
	sr r5
	ldi r12,#4
	ldi r13,#0
	ldi r2,#128
dots_loop:
	ldi r6,#8
	and r6,r5
	bz no_set_dot
	ld r1,r13(DIGITS_BUFF)
	or r1,r2
	st r1,r13(DIGITS_BUFF)
no_set_dot:
	sl r5
	add r13,#1
	cmp r13,r12
	bnz dots_loop
	
	call write_digits
	
	ioa #TCAPTL
	out r0
	ioa #TCAPTH
	out r0
	ioa #TSET
	out r0
	
	ioa #UDR
	in r1
	ldi r1,#'A'
	out r1
	ldi r2,#1
	ioa #SSTAT
uart_wait_loop:
	in r1
	and r1,r2
	bnz uart_wait_loop
	
	ldi r14,#50
wait_for_tmr:
	ioa #CAPTURE
	out r0
	ioa #TCAPTH
	in r1
	cmp r1,r14
	bnc wait_for_tmr
	
	ld r9,r0(COUNTER)
	ld r10,r0(COUNTER+1)
	add r9,#1
	adc r10,#0
	
	xor r1,r1
	xor r2,r2
	add r1,r9
	add r2,r10
	sl r1
	slc r2
	ioa #PORTA
	out r2
	ioa #PW
	out r9
	
	j loop

set_segments:
	sub r15,#2
	st r1,r15(1)
	st r2,r15(2)
	
	; Stuff
	
	ld r1,r15(1)
	ld r2,r15(2)
	add r15,#2
	return

i2c_start:
	sub r15,#4
	st r2,r15(2)
	st r9,r15(3)
	st r8,r15(4)
	st r1,r15(1)
	
	ioa #DDRB
	in r9
	ldi r8,#$3F
	and r9,r8
	ldi r8,#64
	xor r9,r8
	out r9
	call bit_delay
	ldi r8,#128
	xor r9,r8
	out r9
	call bit_delay
	
	ld r1,r15(1)
	ld r9,r15(3)
	ld r2,r15(2)
	ld r8,r15(4)
	add r15,#4
	return

i2c_stop:
	sub r15,#4
	st r1,r15(3)
	st r2,r15(2)
	st r9,r15(1)
	st r10,r15(4)
	
	ioa #DDRB
	in r9
	ldi r10,#128+64
	or r10,r9
	out r10
	call bit_delay
	ldi r9,#128
	xor r10,r9
	out r10
	call bit_delay
	ldi r9,#64
	xor r10,r9
	out r10
	call bit_delay
	
	ld r1,r15(3)
	ld r2,r15(2)
	ld r9,r15(1)
	ld r0,r15(4)
	add r15,#4
	return

	; Data in r14
	; After return, r14 contains received ack
write_byte:
	sub r15,#6
	st r3,r15(1) ; r3 - counter
	st r4,r15(2) ; r4 - shifter
	st r1,r15(3)
	st r2,r15(4)
	st r10,r15(5) ; r10 - temp
	st r11,r15(6) ; r11 - also temp
	ldi r4,#0
	add r4,r14
	
	ldi r3,#8
	ioa #DDRB
	in r11
wb_send_loop:
	; SCL low
	ldi r10,#128
	or r11,r10
	out r11
	call bit_delay
	; Data out
	ldi r10,#128+64
	ldi r11,#1
	and r11,r4
	bz wb_is_zero
	ldi r10,#128
wb_is_zero:
	in r11
	ldi r1,#$3F
	and r11,r1
	or r11,r10
	out r11
	call bit_delay
	ldi r2,#$7F
	and r11,r2
	out r11
	ror r4
	call bit_delay
	sub r3,#1
	bnz wb_send_loop
	
	ldi r10,#128
	or r11,r10
	out r11
	call bit_delay
	ldi r10,#$3F
	and r11,r10
	out r11
	call bit_delay
	
	ioa #PINB
	in r14
	ldi r4,#64
	and r14,r4
	
	ioa #DDRB
	ldi r10,#128
	or r11,r10
	out r11

	ror r14
	ror r14
	ror r14
	ror r14
	ror r14
	ror r14
	
	ld r3,r15(1)
	ld r4,r15(2)
	ld r1,r15(3)
	ld r2,r15(4)
	ld r10,r15(5)
	ld r11,r15(6)
	add r15,#6
	return

;bit_delay:
;	nop
;	return

write_digits:
	sub r15,#5
	st r1,r15(1)
	st r2,r15(2)
	st r14,r15(3)
	st r8,r15(4)
	st r7,r15(5)

	call i2c_start
	ldi r14,#$40
	call write_byte
	call i2c_stop
	call i2c_start
	ldi r14,#$C0
	call write_byte
	xor r8,r8
	ldi r7,#4
digits_send_loop:
	ld r14,r8(DIGITS_BUFF)
	call write_byte
	add r8,#1
	cmp r8,r7
	bnz digits_send_loop
	call i2c_stop
	call bit_delay
	
	call i2c_start
	ldi r14,#$8F
	call write_byte
	call i2c_stop
	
	ld r1,r15(1)
	ld r2,r15(2)
	ld r14,r15(3)
	ld r8,r15(4)
	ld r7,r15(5)
	add r15,#5
	return

bit_delay:
	sub r15,#2
	st r11,r15(1)
	st r10,r15(2)
	ldi r11,#33
bit_delay_loop:
	nop
	nop
	nop
	nop
	sub r11,#1
	bnz bit_delay_loop
	ld r10,r15(2)
	ld r11,r15(1)
	add r15,#2
	return

digit_lut:
	dw %0011111100111111
	dw %0000011000000110
	dw %0101101101011011
	dw %0100111101001111
	dw %0110011001100110
	dw %0110110101101101
	dw %0111110101111101
	dw %0000011100000111
	dw %0111111101111111
	dw %0110111101101111
	dw %0111011101110111
	dw %0111110001111100
	dw %0011100100111001
	dw %0101111001011110
	dw %0111100101111001
	dw %0111000101110001
