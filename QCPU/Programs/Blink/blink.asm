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
	
	; Timer prescaler
	ioa #$0C
	ldi r1,#$F0
	out r1
	; Timer top (0xFFFF)
	ioa #$11
	ldi r1,#$FF
	out r1
	ioa #$12
	out r1
	; UART clock divider (for 115200 @ 27MHz)
	ioa #$07
	out r0
	ioa #$06
	ldi r1,#233
	out r1
	
	ldi r2,#0
loop:
	nop
	ldi r15,#150
wait_for_tmr:
	ioa #$0D
	out r0
	ioa #$0F
	in r1
	cmp r1,r15
	bnc wait_for_tmr
	
	add r2,#1
	ioa #$01
	out r2
	ioa #$13
	out r2
	
	ioa #$0F
	out r0
	ioa #$0E
	out r0
	ioa #$10
	out r0
	
	j loop
