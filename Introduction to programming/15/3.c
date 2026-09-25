#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    int count;

    for (int j = 0; j < 3; j++) {
        count = 0;

        for (int i = 0; i < 3; i++) {
            if (seats[i][j] == 1) {
                count++;
            }
        }

        printf("Seat number %d booked = %d\n", j + 1, count);
    }

    return 0;
}