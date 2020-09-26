#include <iostream>
#include "recursion.h"

int getNumber()
{
	int x = 0;
	std::cout << "\nNumber:";
	std::cin >> x;
	return x;
}

void testFactorial()
{
	int x = 0;
	std::cout << "Factorial Test.";
	x = getNumber();
	while (x > 0)
	{
		printf("...");
		printf("\nResult: %.Lf", factorial(x));
		x = getNumber();
	}
}

void testFibonacci()
{
	int x = 0;
	std::cout << "Fibonacci Test.";
	x = getNumber();
	while (x > 0)
	{
		printf("...");
		printf("\nResult: ");
		for (size_t i = 1; i < x + 1; i++)
		{
			printf("%.Lf ", fibonacci(i));
		}
		x = getNumber();
	}
}

int main()
{
	//Test Function - Factorial
	testFactorial();
	//Test Function - Fibonacci
	testFibonacci();
	return 0;
}