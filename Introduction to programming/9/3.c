#include <stdio.h>

int main()
{
    for(int row = 1; row <= 5; row++)
    {
        for(int space = 1; space <= 5 - row; space++)
        {
            printf(" ");
        }

        for(int star = 1; star <= row; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}