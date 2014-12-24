#ifndef rand_h
#define rand_h

#include "rand/rand32.h"
#include "rand/rand64.h"

#ifdef rand_32

typedef rand32_t rand_t;
rand_t rand_init(int seed);
int rand_range(rant_t* rand, int min, int max);
int rand_rand(rand_t* rand, int max);

#else

typedef rand64_t rand_t;
rand_t rand_init(long long seed);
long long rand_range(rand_t* rand, long long min, long long max);
long long rand_rand(rand_t* rand, long long max);

#endif

#endif