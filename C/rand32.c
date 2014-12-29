#include "rand/rand32.h"

rand32_t rand32_init(int seed)
{
    rand32_t ret;
    ret.seed = abs(seed) % 9999999 + 1;
    ret.curr = ret.seed;
    ret.iter = 0;
    return ret;
}

int rand32_range(rand32_t* rand, int min, int max)
{
    rand->curr = (rand->curr * 125 ) % 2796203;
	rand->iter = rand->iter + 1;
    return rand->curr % (max - min + 1) + min;
}

int rand32_rand(rand32_t* rand, int max)
{
    return rand32_range(rand, 0, max);
}