#include <stdio.h>

int main() {
    int menuRatings[4][3] = {
        {5, 4, 3},
        {4, 5, 4},
        {3, 4, 5},
        {5, 3, 4}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", menuRatings[i][j]);
        }
        printf("\n");
    }

    return 0;
}