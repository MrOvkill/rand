#pragma once

#include <cmath>

namespace Rand
{
	class Rand64
	{
		public:
			long long Seed;
			long long Current;
			long long Iterator;
		public:
			Rand64(long long seed);
			long long Range(long long min, long long max);
			long long Rand(long long max);
	};
}