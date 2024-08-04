#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

#include "io.h"
#include "tholinstd.h"

int putchar(int c) {
	while((reg_stat & 2) != 0) {}
	reg_udr = c;
	return 0;
}

float absd(float x) {
	if(x < 0) return -x;
	return x;
}

#define F_CLK 15000000

void main(void) {
	reg_udiv = F_CLK / 9600 - 1;
	reg_ddra = 0b110001;
	reg_porta = 0b010001;
	
	reg_tdiv0 = F_CLK/2;
	reg_ttop0 = 0xFFFFFFFF;
	
	puts("Hello from Tholin’s RISC-V Core!\r\n");
	uint32_t a = reg_chirp1;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	putchar((a >> 16) & 0xFF);
	putchar((a >> 24) & 0xFF);
	a = reg_chirp2;
	putchar(a & 0xFF);
	putchar((a >> 8) & 0xFF);
	puts("\r\n");
	printf("ab%c %d \"%s\" hex=%x unsigned=%u\n\r", 'c', 219581, "another string", 219582, 3070660541U);
	printf("longs: %ld hex=%lx unsigned=%lu\r\n", 2704080616701578000UL, 2704080616701578001UL, 17137082711761398313UL);
	float ratio1,ratio2;
	long fiba,fibb,t;
	float epsilon;
	int fibCntr;
	fiba = 1;
	fibb = 1;
	epsilon = 1e-32;
	fibCntr = 0;
	printf("Aproximating golden ratio\r\n");
	while(1) {
		putchar('-');
		fibCntr++;
		t = fiba;
		fiba = fibb;
		fibb = fiba + t;
		ratio1 = (float)fibb / (float)fiba;
		ratio2 = (float)(fiba + fibb) / (float)fibb;
		if(absd(ratio1 - ratio2) < epsilon) break;
	}
	printf("\r\n%d\r\n", (int)(ratio1 * 1000));
	printf("%d\r\n", fibCntr);
	
	uint32_t last_t = reg_tmr0;
	while(1) {
		if(reg_tmr0 != last_t) {
			last_t = reg_tmr0;
			reg_porta = reg_porta ^ 0b100000;
		}
	}
}
