#include <stdio.h>

int main()
{
    int minutes = 5;

    while(minutes >= 1)
    {
        printf("Order will be ready in %d minutes\n", minutes);
        minutes--;
    }

    printf("Order Ready!");

    return 0;
}