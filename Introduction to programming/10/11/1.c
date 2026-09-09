#include <stdio.h>

int isEven(int number)
{
    if(number % 2 == 0)
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
    printf("7 is even: %d\n", isEven(7));
    printf("14 is even: %d\n", isEven(14));

    return 0;
}