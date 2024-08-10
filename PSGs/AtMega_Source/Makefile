CC_FLAGS        = -O2 -mmcu=atmega32 -DEMBEDDED -ffunction-sections -DAVR_ASM
LD_FLAGS        = -O2 -mmcu=atmega32 -Wl,--gc-sections
CC              = avr-gcc
LD              = avr-gcc
EXTRA           = avr-size -Ax main && avr-objcopy -j .text -j .data -O ihex main main.hex

LDFLAGS = $(LD_FLAGS) -Wall -Wextra
CCFLAGS = $(CC_FLAGS) -Wall -Wextra

OBJS	= main.o ata.o rng.o diskio.o ffsystem.o ffunicode.o ff.o

main.o: main.c
	$(CC) $(CCFLAGS) -o main.o -c main.c

ata.o: ata.c
	$(CC) $(CCFLAGS) -o ata.o -c ata.c

rng.o: rng.c
	$(CC) $(CCFLAGS) -o rng.o -c rng.c

diskio.o: diskio.c
	$(CC) $(CCFLAGS) -o diskio.o -c diskio.c

ffsystem.o: ffsystem.c
	$(CC) $(CCFLAGS) -o ffsystem.o -c ffsystem.c

ffunicode.o: ffunicode.c
	$(CC) $(CCFLAGS) -o ffunicode.o -c ffunicode.c

ff.o: ff.c
	$(CC) $(CCFLAGS) -o ff.o -c ff.c

accrete.o: accrete.c
	$(CC) $(CCFLAGS) -o accrete.o -c accrete.c

enviro.o: enviro.c
	$(CC) $(CCFLAGS) -o enviro.o -c enviro.c

utils.o: utils.c
	$(CC) $(CCFLAGS) -o utils.o -c utils.c

out: $(OBJS)
	$(LD) -o main $(OBJS) $(LDFLAGS)
	$(EXTRA)

.PHONY: out
