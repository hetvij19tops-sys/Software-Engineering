#include <stdio.h>

int main()
{
    char teamName[] = "CSK";
    int matches = 14;
    float runRate = 8.5;
    char teamCode = 'C';

    printf("Team Name: %s\n", teamName);
    printf("Matches Played: %d\n", matches);
    printf("Average Run Rate: %.2f\n", runRate);
    printf("Team Code: %c\n", teamCode);

    printf("Size of team name: %zu bytes\n", sizeof(teamName));
    printf("Size of matches: %zu bytes\n", sizeof(matches));
    printf("Size of run rate: %zu bytes\n", sizeof(runRate));
    printf("Size of team code: %zu bytes\n", sizeof(teamCode));

    return 0;
}