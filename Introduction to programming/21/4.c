#include <stdio.h>

int main() {
    int prices[] = {100, 200, 300, 400};
    int totalPrice = 0;

    for (int i = 0; i < 4; i++) {
        totalPrice += prices[i];
    }

    printf("Total: %d", totalPrice);

    return 0;
}