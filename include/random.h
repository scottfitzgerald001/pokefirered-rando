#ifndef GUARD_RANDOM_H
#define GUARD_RANDOM_H

#include "global.h"

extern u32 gRngValue;
extern u32 gRng2Value;

//Returns a 16-bit pseudorandom number
u16 Random(void);
u16 Random2(void);
u32 SeededRandom(u32 seed);

//Returns a 32-bit pseudorandom number
#define Random32() (Random() | (Random() << 16))

// The number 1103515245 comes from the example implementation of rand and srand
// in the ISO C standard.
#define RAND_MULT 1103515245
#define ISO_RANDOMIZE1(val)(RAND_MULT * (val) + 24691)
#define ISO_RANDOMIZE2(val)(RAND_MULT * (val) + 12345)

//Sets the initial seed value of the pseudorandom number generator
void SeedRng(u16 seed);
void SeedRng2(u16 seed);

#endif // GUARD_RANDOM_H
