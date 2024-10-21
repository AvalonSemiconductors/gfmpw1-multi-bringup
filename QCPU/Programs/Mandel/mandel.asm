puthex_temp equ 0

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
	ioa #$01
	out r0
	; PORTB as inputs
	ioa #$02
	out r0
	ioa #$03
	out r0

	; UART clock divider (for 115200 @ 15MHz)
	ioa #$07
	out r0
	ioa #$06
	ldi r1,#130
	out r1
	
	ldi r3,#0
	call puthex
	ldi r3,#$15
	call puthex
	ldi r3,#$AF
	call puthex
	ldi r3,#$9C
	call puthex
	ldi r3,#13
	call puthex
	ldi r3,#10
	call puthex

loop:
	j loop

putchar:
	st r3,r0(puthex_temp)
	ioa #$09
	ldi r15,#5
putchar_uart_wait:
	in r3
	and r3,r15
	bnz putchar_uart_wait
	ld r3,r0(puthex_temp)
	ioa #$08
	out r3
	return

puthex:
	st r3,r0(puthex_temp)
	ldi r15,#5
puthex_uart_wait_0:
	in r3
	and r3,r15
	bnz puthex_uart_wait_0
	ld r3,r0(puthex_temp)
	ldi r15,#15
	ror r3
	ror r3
	ror r3
	ror r3
	and r3,r15
	cmp r3,#10
	bnc puthex_n10_1
	ldi r15,#55
	j puthex_n10o_1
puthex_n10_1:
	ldi r15,#48
puthex_n10o_1:
	add r3,r15
	ioa #$08
	out r3
	ioa #$09
	ldi r15,#5
puthex_uart_wait_1:
	in r3
	and r3,r15
	bnz puthex_uart_wait_1
	ld r3,r0(puthex_temp)
	ldi r15,#15
	and r3,r15
	cmp r3,#10
	bnc puthex_n10_2
	ldi r15,#55
	j puthex_n10o_2
puthex_n10_2:
	ldi r15,#48
puthex_n10o_2:
	add r3,r15
	ioa #$08
	out r3
	ioa #$09
	ldi r15,#5
puthex_uart_wait_2:
	in r3
	and r3,r15
	bnz puthex_uart_wait_2
	ld r3,r0(puthex_temp)
	return
