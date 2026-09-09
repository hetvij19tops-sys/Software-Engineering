#include <stdio.h>

int calculateCartTotal(int itemsArray[], int size)
{
    int total = 0;

    for(int i = 0; i < size; i++)
    {
        total = total + itemsArray[i];
    }

    return total;
}

int main()
{
    int items[] = {299, 499, 199};

    int total = calculateCartTotal(items, 3);

    printf("Cart Total = %d", total);

    return 0;
}