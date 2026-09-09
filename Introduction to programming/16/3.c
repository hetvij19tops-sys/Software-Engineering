#include <stdio.h>
#include <string.h>

void compareUsernames(char username1[], char username2[])
{
    if(strcmp(username1, username2) == 0)
    {
        printf("Username taken");
    }
    else
    {
        printf("Username available");
    }
}

int main()
{
    char username1[50];
    char username2[50];

    printf("Enter first username: ");
    scanf("%s", username1);

    printf("Enter second username: ");
    scanf("%s", username2);

    compareUsernames(username1, username2);

    return 0;
}