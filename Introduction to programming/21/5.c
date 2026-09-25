#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 10, 30, 20, 40};
    int n = 6;

    printf("Unique numbers: ");

    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", numbers[i]);
    }

    return 0;
}