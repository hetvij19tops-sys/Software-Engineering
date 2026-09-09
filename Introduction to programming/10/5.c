#include <stdio.h>

int sumOfDigits(int number)
{
    int sum = 0, digit;

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    return sum;
}

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = sumOfDigits(number);

    printf("Sum of digits = %d", result);

    return 0;
}