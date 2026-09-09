#include <stdio.h>

int main()
{
    for(int row = 1; row <= 3; row++)
    {
        for(int col = 1; col <= 3; col++)
        {
            if((row + col) % 2 == 0)
            {
                printf("X ");
            }
            else
            {
                printf("O ");
            }
        }

        printf("\n");
    }

    return 0;
}