#include <stdio.h>

int main()
{
    char team;

    printf("Enter team code (M=MI, C=CSK, R=RCB, G=GT, K=KKR): ");
    scanf(" %c", &team);

    switch(team)
    {
        case 'M':
            printf("Come on MI! Let's win!");
            break;

        case 'C':
            printf("Whistle Podu! Come on CSK!");
            break;

        case 'R':
            printf("Ee Sala Cup Namde!");
            break;

        case 'G':
            printf("Come on GT! Titans all the way!");
            break;

        case 'K':
            printf("Korbo Lorbo Jeetbo!");
            break;

        default:
            printf("Team not found!");
    }

    return 0;
}