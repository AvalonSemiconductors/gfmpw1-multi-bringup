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

loop:
	mov input_switches,address_val
	mov button_states,data_val
	jsr r7,panel_update
short_del:
	nop
	nop
	sob r2,short_del
	jmp loop
;_loop:
;	mov #$FFFF,r2
;_delay_loop:
;	nop
;	sob r2,_delay_loop
;	mov #PORTA,r1
;	ior r2,r1
;	mov #32,r3
;	xor r3,r2
;	iow r2,r1
;	jmp _loop

panel_update:
	mov r1,-(r6)
	mov r2,-(r6)
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
input_switches: dw 0
button_states: dw 0
