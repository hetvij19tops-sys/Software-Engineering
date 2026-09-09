#include <stdio.h>

int main()
{
    float earnings, tax;

    printf("Enter monthly earnings: ");
    scanf("%f", &earnings);

    if (earnings < 10000)
    {
        tax = 0;
    }
    else if (earnings <= 25000)
    {
        tax = earnings * 0.10;
    }
    else
    {
        tax = earnings * 0.20;
    }

    printf("Tax to be paid = Rs. %.2f", tax);

    return 0;
}