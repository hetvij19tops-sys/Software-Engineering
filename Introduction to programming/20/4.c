
#include <stdio.h>

int main() {
    FILE *file;
    char team[50];
    char highestTeam[50];
    int score;
    int highestScore = 0;

    file = fopen("cricket_scores.txt", "r");

    while (fscanf(file, "%s %d", team, &score) == 2) {
        if (score > highestScore) {
            highestScore = score;

            sprintf(highestTeam, "%s", team);
        }
    }

    fclose(file);

    printf("Highest Scoring Team: %s\n", highestTeam);
    printf("Score: %d\n", highestScore);

    return 0;
}