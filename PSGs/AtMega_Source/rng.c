/*
 * rng.c
 *
 * Created: 7/25/2019 5:14:23 PM
 *  Author: lucah
 */ 
#include <stdint.h>
#include "rng.h"

uint32_t iseed1 = 12345;
uint32_t iseed2 = 67890;

void RNG_setSeed(uint64_t newSeed){
	iseed1 = (uint32_t)(newSeed);
	iseed2 = (uint32_t)(newSeed >> 32ULL);
}

int32_t RNG_next(){
	uint32_t k,iz;
	
	k = iseed1 / 53668ULL;
	iseed1 = 40014ULL * (iseed1 - k * 53668ULL) - k * 12211ULL;
	
	k = iseed2 / 52774ULL;
	iseed2 = 40692ULL * (iseed2 - k * 52774ULL) - k * 3791ULL;
	
	iz = iseed1 - iseed2;
	return iz;
}

double RNG_nextDouble(){
    int32_t n = RNG_next();
    if(n < 0) n = -n;
    return (double)n / (double)0x7FFFFFFFL;
}
