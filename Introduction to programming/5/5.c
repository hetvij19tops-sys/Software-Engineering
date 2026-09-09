#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 100 && number % 2 == 0)
    {
        printf("Big Even");
    }
    else
    {
        printf("Not Big Even");
    }

    return 0;
}