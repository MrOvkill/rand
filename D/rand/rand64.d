import std.math;

class Rand64
{
    public long seed;
    public long current;
    public long iterator;

    public this(long seed)
    {
        this.seed = (cast(long)abs(seed)) % 9999999L + 1L;
        this.current = this.seed;
        this.iterator = 0L;
    }

    public long range(long minimum, long maximum)
    {
        this.current = (this.current * 125L) % 2796203L;
        this.iterator = this.iterator + 1L;
        return this.current % (maximum - minimum + 1L) + minimum;
    }

    public long rand(long maximum)
    {
        return this.range(0L, maximum);
    }
}

struct rand64_t {
    long seed;
    long curr;
    long iter;
}

rand64_t rand64_init(long seed)
{
    rand64_t rand;
    rand.seed = (cast(long)abs(seed)) % 9999999L + 1L;
    rand.curr = rand.seed;
    rand.iter = 0L;
    return rand;
}

long rand64_range(rand64_t* rand, long min, long max)
{
    (*rand).curr = ((*rand).curr * 125L) % 2796203L;
    (*rand).iter = (*rand).iter + 1L;
    return (*rand).curr % (max - min + 1L) + min;
}

long rand64_rand(rand64_t* rand, long max)
{
    return rand64_range(rand, 0L, max);
}
