#include "stdheader.h"

int stdheader::compare(const void* p1, const void* p2) {

	return (*(int*)p1 - *(int*)p2);
}
int stdheader::getGCD(int a, int b)
{
	int gcd = 0;

	if (b == 0)
	{
		return a;
	}
	else
	{
		return getGCD(b, a % b);
	}
}
