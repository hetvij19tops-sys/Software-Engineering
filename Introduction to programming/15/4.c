#include <stdio.h>

int main() {
    int playlist1[3][3] = {
        {5, 4, 3},
        {4, 5, 2},
        {3, 4, 5}
    };

    int playlist2[3][3] = {
        {2, 3, 4},
        {3, 2, 5},
        {4, 3, 2}
    };

    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = playlist1[i][j] + playlist2[i][j];
        }
    }

    printf("Resulting Matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}