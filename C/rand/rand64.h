#ifndef rand64_h
#define rand64_h

#include <math.h>
#include <time.h>

typedef struct {
    long long seed;
    long long curr;
    long long iter;
} rand64_t;

rand64_t rand64_init(long long seed)
{
	rand64_t ret;
    ret.seed = abs(seed) % 9999999L + 1L;
    ret.curr = ret.seed;
    ret.iter = 0L;
    return ret;
}

long long rand64_range(rand64_t* rand, long long min, long long max)
{
    rand->seed = (rand->seed * 125L ) % 2796203L;
    return rand->seed % (max - min + 1L) + min;
}

int rand64_rand(rand64_t* rand, long long max)
{
    return rand64_range(rand, 0L, max);
}

#endif