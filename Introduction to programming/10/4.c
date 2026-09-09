#include <stdio.h>

int isArmstrong(int number)
{
    int original, digit, sum = 0;

    original = number;

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if(sum == original)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(isArmstrong(number))
    {
        printf("The number is an Armstrong number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }

    return 0;
}