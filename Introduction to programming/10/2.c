#include <stdio.h>

int factorial(int number)
{
    int fact = 1;

    for(int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("Factorial = %d", result);

    return 0;
}