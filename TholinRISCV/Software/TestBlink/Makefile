PROJECT:=baremetal
OBJECTS:=tholinstd.o baremetal.o
TARGETS:=$(OBJECTS) $(PROJECT).elf $(PROJECT).bin $(PROJECT).debug.txt

all : $(TARGETS)

ARCHFLAGS:=-march=rv32im -mabi=ilp32

PREFIX:=/usr/bin/riscv64-unknown-elf-
CFLAGS:=-I.

CFLAGS+=-fno-stack-protector -fno-pic
CFLAGS+=-static-libgcc -fdata-sections -ffunction-sections
CFLAGS+=-g -O2 $(ARCHFLAGS) -static -ffreestanding
LDFLAGS:= -T flatfile.lds -nostdlib -Wl,--gc-sections -lgcc

$(PROJECT).elf : $(OBJECTS)
	$(PREFIX)as $(ARCHFLAGS) -mno-relax -o start.o start.S
	$(PREFIX)gcc -o $@ $(OBJECTS) start.o $(CFLAGS) $(LDFLAGS)

$(PROJECT).debug.txt : $(PROJECT).elf
	$(PREFIX)objdump -t $^ > $@
	$(PREFIX)objdump -S $^ >> $@

$(PROJECT).bin : $(PROJECT).elf
	$(PREFIX)objcopy $^ -O binary $@
	
%.o: %.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

eprom:
	brp /dev/ttyUSB0 27C160 $(PROJECT).bin

clean :
	rm -rf $(TARGETS)
	rm -rf $(OBJECTS)
	rm -rf start.o
