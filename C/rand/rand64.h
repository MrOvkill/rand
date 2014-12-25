#ifndef rand64_h
#define rand64_h

#include <math.h>
#include <time.h>

struct rand64_t {
    long long seed;
    long long curr;
    long long iter;
};

typedef struct rand64_t rand64_t;

rand64_t rand64_init(long long seed);

long long rand64_range(rand64_t* rand, long long min, long long max);

int rand64_rand(rand64_t* rand, long long max);

#endif