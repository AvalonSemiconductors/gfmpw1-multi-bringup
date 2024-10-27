# I need to use a custom build of the toolchain
# The one in my distro’s package manager does not support the combination of rv32i + soft float + single precision floats
TOOLCHAIN_PATH=/home/tholin/riscv/bin/

TOOLCHAIN_PREFIX=riscv32-unknown-elf

.SUFFIXES:

PATTERN = blink

hex:  ${PATTERN:=.hex}
bin:  ${PATTERN:=.bin}

ARCHFLAGS:=-march=rv32i_zicsr -mabi=ilp32

CCFLAGS = -I../caravel_board/firmware/gf180/ -I../caravel_board/firmware/gf180/generated/ -O2 $(ARCHFLAGS) -D__vexriscv__ -ffreestanding -nostdlib -static-libgcc -g -static -fno-stack-protector -fno-pic

crt0.o: ../caravel_board/firmware/gf180/crt0_vex.S
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-gcc $(CCFLAGS) -c -o $@ $<

isr.o: ../caravel_board/firmware/gf180/isr.c
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-gcc $(CCFLAGS) -c -o $@ $<

%.o: %.c
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-gcc $(CCFLAGS) -c -o $@ $<

%.elf: %.o tholinstd.o isr.o crt0.o custom_math.o
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-gcc -o $@ $^ $(CCFLAGS) -Wl,-Bstatic,--strip-debug -lgcc -T ../caravel_board/firmware/gf180/sections.lds
	${TOOLCHAIN_PATH}$(TOOLCHAIN_PREFIX)-objdump -D blink.elf > blink.lst

%.hex: %.bin
	java ToVerilogHex.java expanded.bin $@

%.bin: %.elf
	$(TOOLCHAIN_PATH)$(TOOLCHAIN_PREFIX)-objcopy -O binary $< $@
	java ../Utils/ExpandROM.java $@ 65536

flash: blink.hex
	python3 ../caravel_board/firmware/gf180/util/caravel_hkflash.py blink.hex
	python3 ../caravel_board/firmware/gf180/util/caravel_hkstop.py

clean:
	rm -f *.elf *.hex *.bin *.vvp *.vcd *.hexe *.lst *.o

.PHONY: clean hex bin all
