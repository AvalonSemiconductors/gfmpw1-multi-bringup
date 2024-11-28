ASL = ../../../asl-avalonsemi/asl
P2BIN = ../../../asl-avalonsemi/p2bin
ARCH = AS-11

%.p: %.asm
	$(ASL) -L -cpu $(ARCH) $<

%.bin: %.p
	$(P2BIN) $<

test: test.bin
	java ../../Utils/ToVerilogHex.java test.bin BOOT.txt 16384

clean:
	rm -rf *.bin *.p *.lst

all: clean test

.PHONY: all
