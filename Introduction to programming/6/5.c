#include <stdio.h>

int main()
{
    int messages;

    printf("Enter number of unread messages: ");
    scanf("%d", &messages);

    if (messages == 0)
    {
        printf("No new messages");
    }
    else if (messages == 1)
    {
        printf("You have 1 new message");
    }
    else if (messages <= 99)
    {
        printf("You have %d new messages", messages);
    }
    else
    {
        printf("99+ new messages");
    }

    return 0;
}