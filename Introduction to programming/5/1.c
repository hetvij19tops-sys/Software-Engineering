#include <stdio.h>

void splitBill(int amount, int friends)
{
    int share, leftover;

    share = amount / friends;
    leftover = amount % friends;

    printf("Each friend's share = %d\n", share);
    printf("Leftover amount = %d\n", leftover);
}

int main()
{
    int amount = 1000;
    int friends = 3;

    splitBill(amount, friends);

    return 0;
}