#include "rand/rand64.h"

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
    rand->curr = (rand->curr * 125L ) % 2796203L;
	rand->iter = rand->iter + 1;
    return rand->curr % (max - min + 1L) + min;
}

int rand64_rand(rand64_t* rand, long long max)
{
    return rand64_range(rand, 0L, max);
}