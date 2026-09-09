#include <stdio.h>

int main()
{
    float gb, bill;

    printf("Enter data used in GB: ");
    scanf("%f", &gb);

    if (gb <= 2)
    {
        bill = 100;
    }
    else if (gb <= 5)
    {
        bill = 100 + (gb - 2) * 20;
    }
    else
    {
        bill = 160 + (gb - 5) * 50;
    }

    printf("Total bill = Rs. %.2f", bill);

    return 0;
}