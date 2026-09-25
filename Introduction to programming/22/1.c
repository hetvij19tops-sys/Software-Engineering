#include <stdio.h>
#include <string.h>

float calculate_score(int completed, int total) {
    return ((float)completed / total) * 100;
}

int main() {
    char name[50];
    char habits[3][50];
    char status[20];
    int completed = 0;
    int i;
    float score;

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Welcome, %s! Ready to boost your productivity today?\n\n", name);

    printf("Enter 3 habits you want to track:\n");

    for (i = 0; i < 3; i++) {
        printf("Enter habit %d: ", i + 1);
        fgets(habits[i], 50, stdin);
        habits[i][strcspn(habits[i], "\n")] = '\0';
    }

    printf("\nYour habits are:\n");

    for (i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, habits[i]);
    }

    printf("\nMark your habits as done or not done:\n");

    for (i = 0; i < 3; i++) {
        printf("Did you complete %s? ", habits[i]);
        scanf("%s", status);

        if (strcmp(status, "done") == 0) {
            completed++;
        }
    }

    printf("\nYou completed %d/3 habits today!\n", completed);

    score = calculate_score(completed, 3);

    printf("Your productivity score is %.0f%%\n", score);

    return 0;
}