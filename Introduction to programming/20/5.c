#include <stdio.h>

int main() {
    FILE *file;
    char movie[100];
    char name[100];

    printf("Enter movie name: ");
    fgets(movie, 100, stdin);

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    file = fopen("bookings.txt", "a");

    fprintf(file, "Movie: %sUser: %s\n", movie, name);

    fclose(file);

    printf("Booking saved successfully.");

    return 0;
}