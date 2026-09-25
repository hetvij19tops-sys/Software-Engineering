#include <stdio.h>

int main() {
    int numbers[7] = {10, 20, 30, 40, 50, 60, 70};

    printf("Value at index 10: %d\n", numbers[10]);

    // Index 10 is outside the array because valid indexes are 0 to 6.
    // C may print a random/garbage value or behave unexpectedly.
    // This is risky because it accesses memory that does not belong to the array.

    return 0;
}