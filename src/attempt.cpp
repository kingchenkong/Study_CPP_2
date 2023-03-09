#include "attempt.h"

extern "C"
{
	Attempt::Attempt(int x)
	{
		this->x = x;
	}

	int Attempt::adding(int y)
	{
		return this->x + y;
	}
}
