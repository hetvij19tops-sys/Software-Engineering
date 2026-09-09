#include <stdio.h>

struct Song
{
    char title[50];
    char artist[50];
    int durationInSeconds;
};

int main()
{
    struct Song song = {"Shape of You", "Ed Sheeran", 233};

    printf("Song Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.durationInSeconds);

    return 0;
}
