#include <stdio.h>

int main() {
    char *songs[] = {"Perfect", NULL, "Believer", "Shape of You"};

    for (int i = 0; i < 4; i++) {
        if (songs[i] == NULL)
            printf("Song name is missing at position %d\n", i + 1);
        else
            printf("Song: %s\n", songs[i]);
    }

    return 0;
}