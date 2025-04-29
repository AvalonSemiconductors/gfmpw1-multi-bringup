#include <stdint.h>

#include "xorshift.h"

uint64_t xorshift_state = 0xFF9820A6C9D01122ULL;

uint64_t rng_next(void) {
	uint64_t x = xorshift_state;
	x ^= x << 13;
	x ^= x >> 7;
	x ^= x << 17;
	xorshift_state = x;
	return x;
}
