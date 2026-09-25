#include <stdio.h>

int main() {
    int runs[3][4] = {
        {180, 150, 200, 175},
        {160, 190, 155, 180},
        {210, 170, 185, 195}
    };

    int total;

    for (int i = 0; i < 3; i++) {
        total = 0;

        for (int j = 0; j < 4; j++) {
            total = total + runs[i][j];
        }

        printf("Team %d total runs = %d\n", i + 1, total);
    }

    return 0;
}