ASL_DIR = /media/lucah/8a6b8802-051e-45a8-8492-771202e4c08a/asl-avalonsemi
ASL = $(ASL_DIR)/asl
P2BIN = $(ASL_DIR)/p2bin
ARCH = QCPU

PROJECT = blink

%.p: %.asm
	$(ASL) -cpu $(ARCH) $<

%.bin: %.p
	$(P2BIN) $<

expanded.bin: $(PROJECT).bin
	java ../../../Utils/ExpandROM.java blink.bin 4194304

flash: $(PROJECT)
	sudo flashrom -c "W25Q32BV/W25Q32CV/W25Q32DV" --programmer ch341a_spi --write expanded.bin

clean:
	rm -rf *.bin *.p

all: clean $(PROJECT)

.PHONY: all
