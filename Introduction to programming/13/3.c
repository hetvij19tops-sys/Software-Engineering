#include <stdio.h>

int main() {
    int orders[7];
    int max, maxIndex;
    printf("Enter Zomato orders for 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i+1);
        scanf("%d", &orders[i]);
    }
    max = orders[0];
    maxIndex = 0;
    for (int i = 1; i < 7; i++) {
        if (orders[i] > max) {
            max = orders[i];
            maxIndex = i;
        }
    }
    printf("\nHighest number of orders: %d\n", max);
    printf("Day index: %d\n", maxIndex);
    return 0;
}
    