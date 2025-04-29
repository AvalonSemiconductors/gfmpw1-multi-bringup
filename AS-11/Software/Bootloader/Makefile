ASL = ../../../../asl-avalonsemi/asl
P2BIN = ../../../../asl-avalonsemi/p2bin
ARCH = AS-11

%.p: %.asm
	$(ASL) -L -cpu $(ARCH) $<

%.bin: %.p
	$(P2BIN) $<

boot: boot.bin
	java ../../../Utils/ToVerilogHex.java boot.bin BOOT.txt 16384
	java ../../../Utils/ToConstArray.java boot.bin > boot_data.h

clean:
	rm -rf *.bin *.p *.lst

all: clean boot

.PHONY: all
