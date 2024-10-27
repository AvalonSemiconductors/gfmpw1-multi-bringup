#include <stdint.h>

#include "custom_math.h"
#include "tholinstd.h"

float fabs(float x) {
	return x < 0 ? -x : x;
}

float sqrtf(float x) {
	if(sizeof(float) == 4) {
		float x2,y = 0;
		uint32_t i;
		
		if(x == 0) return 0;
		x2 = x * 0.5f;
		i = *(uint32_t *)&x;
		i = 0x5f3759df - (i >> 1);
		y = *(float *)&i;
		y *= 1.5f - (x2 * y * y);
		y *= 1.5f - (x2 * y * y);
		y *= 1.5f - (x2 * y * y);
		return 1.0f / y;
	}else {
		printf("Float is not 4 bytes\r\n");
		while(1);
	}
}

float cosf(float x) {
	int32_t div;
	uint8_t sign;
	uint8_t i;
	float result,inter,num,comp,den;
	div = (int32_t)(x / M_PI);
	x = x - (div * M_PI);
	sign = 1;
	sign = (div & 1) != 0;
	
	result = 1.0;
	inter = 1.0;
	num = x * x;
	char flag = 1;
	for(i = 1; i <= 8; i++) {
		comp = 2.0 * i;
		den = comp * (comp - 1.0);
		inter *= num / den;
		if(flag) result -= inter;
		else result += inter;
		flag = !flag;
	}
	return sign ? -result : result;
}

float sinf(float x) {
	return cosf(x - M_PI * 0.5f);
}

float tan(float x) {
	float c = cosf(x);
	if(c < 1e-8f) return 100;
	return sinf(x) / c;
}
