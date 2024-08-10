/*
 * rng.h
 *
 * Created: 7/25/2019 5:31:10 PM
 *  Author: lucah
 */ 


#ifndef RNG_H_
#define RNG_H_

void RNG_setSeed(uint64_t newSeed);
int32_t RNG_next();
double RNG_nextDouble();

#endif /* RNG_H_ */
