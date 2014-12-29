#include "rand/rand64.hpp"

Rand::Rand64::Rand64(long long Seed)
{
	this->Seed = ((long long)std::abs(Seed)) % 9999999L + 1L;
	this->Current = this->Seed;
	this->Iterator = 0L;
}

long long Rand::Rand64::Range(long long Minimum, long long Maximum)
{
	this->Current = ( this->Current * 125L ) % 2796203L;
	this->Iterator = this->Iterator + 1L;
	return this->Current % (Maximum - Minimum + 1L) + Minimum;
}

long long Rand::Rand64::Rand(long long Maximum)
{
	return this->Range(0L, Maximum);
}