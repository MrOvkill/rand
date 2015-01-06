#ifndef rand32_h
#define rand32_h

#include <math.h>
#include <stdlib.h>

struct rand32_t {
    int seed;
    int curr;
    int iter;
};

typedef struct rand32_t rand32_t;

rand32_t rand32_init(int seed);

int rand32_range(rand32_t* rand, int min, int max);

int rand32_rand(rand32_t* rand, int max);

#endif
