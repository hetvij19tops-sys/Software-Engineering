#include <stdio.h>

int main()
{
    int rating1 = 4;
    int rating2 = 5;
    int rating3 = 3;
    int average;

    average = (rating1 + rating2 + rating3) / 3;

    printf("Average rating = %d\n", average);

    return 0;
}