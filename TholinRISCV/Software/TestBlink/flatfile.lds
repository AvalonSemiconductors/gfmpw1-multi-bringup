OUTPUT_FORMAT("elf32-littleriscv")

ENTRY(_start)

__DYNAMIC = 0;

MEMORY {
	ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 0x0200000
	RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 0x0080000
}
SECTIONS {
	.data : AT(_sidata) {
		. = ALIGN(4);
		_sdata = .;
		_ram_start = .;
		*(.data*)
		*(.sdata*)
		. = ALIGN(4);
		_edata = .;
	} >RAM
	
	.text : {
		. = ALIGN(4);
		start.o(.text)
		*(.eh_frame)
		*(.eh_frame_hdr)
		*(.init_array*)
		*(.gcc_except_table*)
		*(.text*)
		. = ALIGN(4);
		*(.rodata*)
		*(.srodata*)
		_etext = .;
		_sidata = _etext;
	} >ROM
	
	.bss : {
		. = ALIGN(4);
		_sbss = .;
		*(.bss*)
		*(.sbss*)
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;
	} >RAM
	
	.heap : {
		. = ALIGN(4);
		_heap_start = .;
		_end = .;
	} >RAM
	
	/* If we're on a newer compiler */
	/DISCARD/ :
	{
		*(.interp)
		*(.dynsym)
		*(.dynstr)
		*(.header)
	} : phdr

}


PROVIDE(_fstack = ORIGIN(RAM) + LENGTH(RAM));
