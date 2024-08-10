.section .text
.global _start
.type _start, @function

.align 4
_start:
.option push
.option norelax
	nop
.option pop
	la sp, _fstack
.word 0x00800073 #cli
	
	la a0, _sbss
	la a1, _ebss
	bge a0, a1, end_init_bss
loop_init_bss:
	sw zero, 0(a0)
	addi a0, a0, 4
	blt a0, a1, loop_init_bss
end_init_bss:
	
	call main
	ebreak

.global _ivec
.type _ivec, @function

.align 4
_ivec:
	nop
	sw x1, -1*4(sp)
	;sw x2, -2*4(sp)
	sw x3, -3*4(sp)
	sw x4, -4*4(sp)
	sw x5, -5*4(sp)
	sw x6, -6*4(sp)
	sw x7, -7*4(sp)
	;sw x8, -8*4(sp)
	;sw x9, -9*4(sp)
	sw x10, -10*4(sp)
	sw x11, -11*4(sp)
	sw x12, -12*4(sp)
	sw x13, -13*4(sp)
	sw x14, -14*4(sp)
	sw x15, -15*4(sp)
	sw x16, -16*4(sp)
	sw x17, -17*4(sp)
	;sw x18, -18*4(sp)
	;sw x19, -19*4(sp)
	;sw x20, -20*4(sp)
	;sw x21, -21*4(sp)
	;sw x22, -22*4(sp)
	;sw x23, -23*4(sp)
	;sw x24, -24*4(sp)
	;sw x25, -25*4(sp)
	;sw x26, -26*4(sp)
	;sw x27, -27*4(sp)
	sw x28, -28*4(sp)
	sw x29, -29*4(sp)
	sw x30, -30*4(sp)
	sw x31, -31*4(sp)
	addi sp,sp,-31*4
	call isr
	lw x1, 30*4(sp)
	;lw x2, 29*4(sp)
	lw x3, 28*4(sp)
	lw x4, 27*4(sp)
	lw x5, 26*4(sp)
	lw x6, 25*4(sp)
	lw x7, 24*4(sp)
	;lw x8, 23*4(sp)
	;lw x9, 22*4(sp)
	lw x10, 21*4(sp)
	lw x11, 20*4(sp)
	lw x12, 19*4(sp)
	lw x13, 18*4(sp)
	lw x14, 17*4(sp)
	lw x15, 16*4(sp)
	lw x16, 15*4(sp)
	lw x17, 14*4(sp)
	;lw x18, 13*4(sp)
	;lw x19, 12*4(sp)
	;lw x20, 11*4(sp)
	;lw x21, 10*4(sp)
	;lw x22, 9*4(sp)
	;lw x23, 8*4(sp)
	;lw x24, 7*4(sp)
	;lw x25, 6*4(sp)
	;lw x26, 5*4(sp)
	;lw x27, 4*4(sp)
	lw x28, 3*4(sp)
	lw x29, 2*4(sp)
	lw x30, 1*4(sp)
	lw x31, 0*4(sp)
	addi sp,sp,31*4
.word 0x26D00073 #iret
