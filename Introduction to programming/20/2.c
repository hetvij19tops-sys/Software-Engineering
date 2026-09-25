#include <stdio.h>

int main() {
    FILE *file;
    char song[100];
    int position = 1;

    file = fopen("favourite_songs.txt", "r");

    while (fgets(song, 100, file) != NULL) {
        printf("%d. %s", position, song);
        position++;
    }

    fclose(file);

    return 0;
}