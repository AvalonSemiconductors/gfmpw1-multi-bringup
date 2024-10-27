TOOLCHAIN_PATH=/usr/bin/

TOOLCHAIN_PREFIX=riscv64-unknown-elf

.SUFFIXES:

PATTERN = blink

hex:  ${PATTERN:=.hex}
bin:  ${PATTERN:=.bin}

%.elf: %.c ../../caravel_board/firmware/gf180/sections.lds ../../caravel_board/firmware/gf180/crt0_vex.S
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-gcc -I../../caravel_board/firmware/gf180/ -I../../caravel_board/firmware/gf180/generated/ -O0 -mabi=ilp32 -march=rv32i_zicsr -D__vexriscv__ -Wl,-Bstatic,-T,../../caravel_board/firmware/gf180/sections.lds,--strip-debug -ffreestanding -nostdlib -o $@ ../../caravel_board/firmware/gf180/crt0_vex.S ../../caravel_board/firmware/gf180/isr.c $<
	${TOOLCHAIN_PATH}$(TOOLCHAIN_PREFIX)-objdump -D blink.elf > blink.lst

%.hex: %.elf
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-objcopy -O verilog $< $@
	sed -ie 's/@1000/@0000/g' $@

%.bin: %.elf
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-objcopy -O binary $< $@
	java ../../Utils/ExpandROM.java $@ 8388608

flash: blink.bin
	sudo flashrom --programmer ch341a_spi --write expanded.bin

clean:
	rm -f *.elf *.hex *.bin *.vvp *.vcd *.hexe *.lst

.PHONY: clean hex bin all
