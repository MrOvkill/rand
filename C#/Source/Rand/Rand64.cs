using System;

namespace Rand
{
    public class Rand64
    {
        public long Seed;
        public long Current;
        public long Iterator;

        public Rand64(long Seed)
        {
            this.Seed = (Math.Abs(Seed)) % 9999999L + 1L;
            this.Current = this.Seed;
            this.Iterator = 0L;
        }

        public long Range(long Minimum, long Maximum)
        {
            this.Current = ( this.Current * 125L ) % 2796203L;
            this.Iterator = this.Iterator + 1L;
            return this.Current % (Maximum - Minimum + 1L) + Minimum;
        }

        public long Rand(long Maximum)
        {
            return this.Range(0L, Maximum);
        }
    }
}
