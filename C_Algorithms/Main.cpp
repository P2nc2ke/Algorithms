#include <iostream>
#include "recursion.h"
#include <chrono>
using namespace std::chrono;

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
		auto start = high_resolution_clock::now();
		printf("\nResult: %.Lf", factorial(x));
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<milliseconds>(stop - start);
		std::cout << "\nAlgorithm Duration: " << duration.count() << " ms" << std::endl;
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
		auto start = high_resolution_clock::now();
		for (size_t i = 1; i < x + 1; i++)
		{
			printf("%.Lf ", fibonacci(i));
		}
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<milliseconds>(stop - start);
		std::cout << "\nAlgorithm Duration: " << duration.count() << " ms" << std::endl;
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