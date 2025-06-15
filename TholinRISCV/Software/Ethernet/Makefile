PROJECT:=baremetal
OBJECTS:=start.o tholinstd.o i2c.o eeprom.o rtc.o sdcard.o baremetal.o arp.o ethernet.o phy.o xorshift.o ip.o crc.o ext4.o udp.o dhcp.o iputils.o slaac.o dns.o ntp.o tcp.o
TARGETS:=$(OBJECTS) $(PROJECT).elf $(PROJECT).bin $(PROJECT).debug.txt

START_SOURCE:=../Common/start_coldboot.S
LDFILE:=../Common/flatfile_coldboot.lds

all : $(TARGETS)

ARCHFLAGS:=-march=rv32im -mabi=ilp32

#PREFIX:=/usr/bin/riscv32-unknown-elf-
PREFIX:=/home/tholin/riscv/bin/riscv32-unknown-elf-

CFLAGS:=-I. -I../Common/
CFLAGS+=-fno-stack-protector -fno-pic
CFLAGS+=-static-libgcc -fdata-sections -ffunction-sections -mstrict-align
CFLAGS+=-g -O2 $(ARCHFLAGS) -static -ffreestanding
LDFLAGS:= -T $(LDFILE) -nostdlib -Wl,--gc-sections -lgcc -mstrict-align

start.o: $(START_SOURCE)
	$(PREFIX)as $(ARCHFLAGS) -mno-relax -o $@ $<

tholinstd.o: ../Common/tholinstd.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

i2c.o: ../Common/i2c.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

sdcard.o: ../Common/sdcard.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

eeprom.o: ../Common/eeprom.c
	$(PREFIX)gcc $(CFLAGS) -c -o $@ $<

rtc.o: ../Common/rtc.c
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
	java ../../../Utils/ToConstArray.java $(PROJECT).bin true > $(PROJECT)_data.h

eprom:
	brp /dev/ttyUSB0 27C160 $(PROJECT).bin

clean :
	rm -rf $(TARGETS)
	rm -rf $(OBJECTS)
	rm -rf start.o
