#include <stdio.h>

int factorial(int n)
{
    printf("n = %d\n", n);

    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int result;

    result = factorial(5);

    printf("Factorial = %d", result);

    return 0;
}