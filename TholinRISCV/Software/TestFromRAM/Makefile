PROJECT:=baremetal
OBJECTS:=start.o tholinstd.o baremetal.o
TARGETS:=$(OBJECTS) $(PROJECT).elf $(PROJECT).bin $(PROJECT).debug.txt $(PROJECT)_data.h

all : $(TARGETS)

ARCHFLAGS:=-march=rv32im -mabi=ilp32

PREFIX:=/usr/bin/riscv64-unknown-elf-

CFLAGS:=-I. -I../Common/
CFLAGS+=-fno-stack-protector -fno-pic
CFLAGS+=-static-libgcc -fdata-sections -ffunction-sections
CFLAGS+=-g -O2 $(ARCHFLAGS) -static -ffreestanding
LDFLAGS:= -T flatfile.lds -nostdlib -Wl,--gc-sections -lgcc

start.o: start.S
	$(PREFIX)as $(ARCHFLAGS) -mno-relax -o start.o start.S

tholinstd.o: ../Common/tholinstd.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

%.o: %.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

$(PROJECT).elf : $(OBJECTS)
	
	$(PREFIX)gcc -o $@ $(OBJECTS) $(CFLAGS) $(LDFLAGS)

$(PROJECT).debug.txt : $(PROJECT).elf
	$(PREFIX)objdump -t $^ > $@
	$(PREFIX)objdump -S $^ >> $@

$(PROJECT).bin : $(PROJECT).elf
	$(PREFIX)objcopy $^ -O binary $@

$(PROJECT)_data.h : $(PROJECT).bin
	java ../../../Utils/ToConstArray.java $(PROJECT).bin > $(PROJECT)_data.h

eprom:
	brp /dev/ttyUSB0 27C160 $(PROJECT).bin

clean :
	rm -rf $(TARGETS)
	rm -rf $(OBJECTS)
	rm -rf start.o
