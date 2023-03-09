#ifndef CSHARP_ATTEMPT_SO
#define CSHARP_ATTEMPT_SO

#include <string.h>
#include <iostream>

typedef void (*Callback)(int value);

extern "C"
{
	class Attempt
	{
		int x;

	public:
		Attempt(int x);
		int adding(int y);
	};

	void *Create(int x)
	{
		return (void *)new Attempt(x);
	}

	int AttemptAdd(Attempt *a, int y)
	{
		return a->adding(y);
	}

	void AttemptAddWithCallback(Attempt *a, int y, Callback callback)
	{
		callback(a->adding(y));
	}
}

#endif