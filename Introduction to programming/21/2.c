#include <stdio.h>

void formatFollowersCount(int followers) {
    if (followers >= 1000000)
        printf("%.1fM", followers / 1000000.0);
    else if (followers >= 1000)
        printf("%.1fK", followers / 1000.0);
    else
        printf("%d", followers);
}

int main() {
    formatFollowersCount(1500);
    printf("\n");

    formatFollowersCount(1200000);
    printf("\n");

    formatFollowersCount(850);

    return 0;
}