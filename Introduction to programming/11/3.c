#include <stdio.h>

float applyDiscount(float price, float discountPercent)
{
    float discount;

    discount = price * discountPercent / 100;

    return price - discount;
}

int main()
{
    float finalPrice;

    finalPrice = applyDiscount(1000, 20);

    printf("Final Price = %.2f", finalPrice);

    return 0;
}