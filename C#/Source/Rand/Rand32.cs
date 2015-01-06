using System;

namespace Rand
{
    public class Rand32
    {
        public int Seed;
        public int Current;
        public int Iterator;

        public Rand32(int Seed)
        {
            this.Seed = (Math.Abs(Seed)) % 9999999 + 1;
            this.Current = this.Seed;
            this.Iterator = 0;
        }

        public int Range(int Minimum, int Maximum)
        {
            this.Current = ( this.Current * 125 ) % 2796203;
            this.Iterator = this.Iterator + 1;
            return this.Current % (Maximum - Minimum + 1) + Minimum;
        }

        public int Rand(int Maximum)
        {
            return this.Range(0, Maximum);
        }
    }
}
