#include <iostream>
#include "Header/Recursion.h"

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

int main()
{
    testFactorial();
    return 0;
}