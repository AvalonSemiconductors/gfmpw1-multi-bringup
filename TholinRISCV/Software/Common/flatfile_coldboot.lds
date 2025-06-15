OUTPUT_FORMAT("elf32-littleriscv")

ENTRY(_start)

__DYNAMIC = 0;

MEMORY {
	RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 0x0080000
}
SECTIONS {
	
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
	} > RAM
	
	.data : {
		. = ALIGN(4);
		_sdata = .;
		*(.data*)
		*(.sdata*)
		. = ALIGN(4);
		_edata = .;
	} > RAM
	
	.bss : {
		. = ALIGN(16);
		_sbss = .;
		*(.bss)
		*(.bss.*)
		*(.sbss*)
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;
	} > RAM
	
	.heap : {
		. = ALIGN(16);
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
