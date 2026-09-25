#include <stdio.h>

int main() {
    int orders[3][3] = {
        {10, 15, 20},
        {12, 18, 25},
        {8, 14, 22}
    };

    int transpose[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = orders[i][j];
        }
    }

    printf("Original Matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", orders[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}