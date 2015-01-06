import std.math;

class Rand32
{
    public int seed;
    public int current;
    public int iterator;

    public this(int seed)
    {
        this.seed = (cast(int)abs(seed)) % 9999999 + 1;
        this.current = this.seed;
        this.iterator = 0;
    }

    public int range(int minimum, int maximum)
    {
        this.current = (this.current * 125) % 2796203;
        this.iterator = this.iterator + 1;
        return this.current % (maximum - minimum + 1) + minimum;
    }

    public int rand(int maximum)
    {
        return this.range(0, maximum);
    }
}

struct rand32_t {
    int seed;
    int curr;
    int iter;
}

rand32_t rand32_init(int seed)
{
    rand32_t rand;
    rand.seed = (cast(int)abs(seed)) % 9999999 + 1;
    rand.curr = rand.seed;
    rand.iter = 0;
    return rand;
}

int rand32_range(rand32_t* rand, int min, int max)
{
    (*rand).curr = ((*rand).curr * 125) % 2796203;
    (*rand).iter = (*rand).iter + 1;
    return (*rand).curr % (max - min + 1) + min;
}

int rand32_rand(rand32_t* rand, int max)
{
    return rand32_range(rand, 0, max);
}
