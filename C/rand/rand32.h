#ifndef rand32_h
#define rand32_h

#include <math.h>
#include <time.h>

typedef struct {
    int seed;
    int curr;
    int iter;
} rand32_t;

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
    rand->seed = (rand->seed * 125 ) % 2796203;
    return rand->seed % (max - min + 1) + min;
}

int rand32_rand(rand32_t* rand, int max)
{
    return rand32_range(rand, 0, max);
}

#endif