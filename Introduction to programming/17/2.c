#include <stdio.h>

int main() {
    char food[4][20] = {
        "Pizza",
        "Burger",
        "Pasta",
        "Dosa"
    };

    for (int i = 0; i < 4; i++) {
        if (food[i][0] == 'P') {
            printf("%s\n", food[i]);
        }
    }

    return 0;
}