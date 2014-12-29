#include "rand/rand32.hpp"

Rand::Rand32::Rand32(int Seed)
{
	this->Seed = ((int)std::abs(Seed)) % 9999999 + 1;
	this->Current = this->Seed;
	this->Iterator = 0;
}

int Rand::Rand32::Range(int Minimum, int Maximum)
{
	this->Current = ( this->Current * 125 ) % 2796203;
	this->Iterator = this->Iterator + 1;
	return this->Current % (Maximum - Minimum + 1) + Minimum;
}

int Rand::Rand32::Rand(int Maximum)
{
	return this->Range(0, Maximum);
}