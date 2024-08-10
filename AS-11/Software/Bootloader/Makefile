TOOLCHAIN = /home/tholin/Desktop/pdp11-toolchain/install/bin

CC = $(TOOLCHAIN)/pdp11-aout-gcc
LD = $(TOOLCHAIN)/pdp11-aout-ld
AS = $(TOOLCHAIN)/pdp11-aout-as

LDFLAGS += -nostdlib --strip-all --oformat=binary --script=stand.ldscript -Ttext 0x0 -M

all: boot_data.h

boot.o: boot.s
	$(AS) -o boot.o boot.s

boot: boot.o
	$(LD) -o BOOT $(LDFLAGS) boot.o

clean:
	rm -rf *.o boot_data.h BOOT

boot_data.h: boot
	java ../../../Utils/ToConstArray.java BOOT > boot_data.h

.PHONY: all echo clean
