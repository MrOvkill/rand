#pragma once

#include <cmath>

namespace Rand
{
	class Rand32
	{
		public:
			int Seed;
			int Current;
			int Iterator;
		public:
			Rand32(int seed);
			int Range(int min, int max);
			int Rand(int max);
	};
}