#include <stdio.h>

int main() {
    int followers[] = {950, 1200, 5400, 15000};
    int n = 4;

    for (int i = 0; i < n; i++) {

        if (followers[i] >= 1000) {
            printf("%.1fK\n", followers[i] / 1000.0);
        } else {
            printf("%d\n", followers[i]);
        }
    }

    return 0;
}