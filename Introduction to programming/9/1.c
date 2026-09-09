#include <stdio.h>

int main()
{
    for(int row = 1; row <= 4; row++)
    {
        for(int col = 1; col <= 6; col++)
        {
            printf("R%dC%d ", row, col);
        }

        printf("\n");
    }

    return 0;
}