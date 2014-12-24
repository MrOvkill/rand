#include "rand/rand.h"

#ifdef rand_32

rand_t rand_init(int seed)
{
    rand_t ret;
    ret.seed = abs(seed) % 9999999 + 1;
    ret.curr = ret.seed;
    ret.iter = 0;
    return ret;
}

int rand_range(rand_t* rand, int min, int max)
{
    rand->seed = (rand->seed * 125 ) % 2796203;
    return rand->seed % (max - min + 1) + min;
}

int rand_rand(rand_t* rand, int max)
{
    return rand_range(rand, 0, max);
}

#else

rand_t rand_init(long long seed)
{
	rand_t ret;
    ret.seed = abs(seed) % 9999999L + 1L;
    ret.curr = ret.seed;
    ret.iter = 0L;
    return ret;
}

long long rand_range(rand_t* rand, long long min, long long max)
{
    rand->seed = (rand->seed * 125L ) % 2796203L;
    return rand->seed % (max - min + 1L) + min;
}

int rand_rand(rand_t* rand, long long max)
{
    return rand_range(rand, 0L, max);
}

#endif