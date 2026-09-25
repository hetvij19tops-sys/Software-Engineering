#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("favourite_songs.txt", "w");

    fprintf(file, "Perfect\n");
    fprintf(file, "Shape of You\n");
    fprintf(file, "Believer\n");
    fprintf(file, "Faded\n");
    fprintf(file, "Blinding Lights\n");

    fclose(file);

    printf("Songs saved successfully.");

    return 0;
}