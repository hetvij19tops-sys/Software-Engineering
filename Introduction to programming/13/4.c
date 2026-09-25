#include <stdio.h>

int main() {
    int screenTime[7];
    int total = 0;
    float average;
    int count = 0;

    printf("Enter Instagram screen time for 7 days:\n");

    for (int i = 0; i < 7; i++) {
        scanf("%d", &screenTime[i]);
        total += screenTime[i];
    }

    average = total / 7.0;

    for (int i = 0; i < 7; i++) {
        if (screenTime[i] > average) {
            count++;
        }
    }

    printf("Weekly average: %.2f minutes\n", average);
    printf("Days above average: %d\n", count);

    return 0;
}
