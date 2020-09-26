#include "recursion.h"

long double factorial(int x)
{
	if (x == 0)
		return 1;
	else
		return x * factorial(x - 1);
}

long double factorial2(int x, long double tmp)
{
	if (x == 0)
		return tmp;
	else
		return factorial2(x - 1, x * tmp);
}

long double fibonacci(int x)
{
	if (x < 2)
		return x;
	else
		return fibonacci(x - 1) + fibonacci(x - 2);
}