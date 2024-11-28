DDRA equ $00
PORTA equ $01
PINA equ $02
SDIV equ $0B
UDIV equ $0E

F_CLK equ 10000000
UDIV_VAL equ F_CLK / 9600

	org $0000
_start:
	nop
	clr r6
	dec r6
	dec r6
	mov #DDRA,r1
	mov #%1101101,r2
	iow r2,r1
	mov #PORTA,r1
	mov #1,r2
	iow r2,r1
	mov #SDIV,r1
	mov #2,r2
	iow r2,r1
	mov #UDIV,r1
	mov #UDIV_VAL,r2
	iow r2,r1
	
	mov #5,r1
short_del:
	dec test2
	dec r1
	bpl short_del
	
	halt
	jmp _start

	org $1000
test:
	db 0,0,0,0,0,0,0,'a'
test2:
	db $38,$38
