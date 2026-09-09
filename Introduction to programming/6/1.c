#include <stdio.h>

int main()
{
    int age;
    char firstTime;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a first-time user? (Y/N): ");
    scanf(" %c", &firstTime);

    if (age < 22)
    {
        printf("You get 10%% discount.");
    }
    else if (firstTime == 'Y' || firstTime == 'y')
    {
        printf("You get 20%% discount.");
    }
    else
    {
        printf("You get 5%% discount.");
    }

    return 0;
}