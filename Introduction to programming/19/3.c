#include <stdio.h>

struct Movie
{
    char name[50];
    char genre[30];
    float rating;
};

void displayMovie(struct Movie movie)
{
    printf("Movie Name: %s\n", movie.name);
    printf("Genre: %s\n", movie.genre);
    printf("Rating: %.1f/10\n", movie.rating);
}

int main()
{
    struct Movie movie = {"3 Idiots", "Comedy", 8.4};

    displayMovie(movie);

    return 0;
}