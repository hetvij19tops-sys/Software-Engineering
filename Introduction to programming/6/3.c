#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char day[15];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter day: ");
    scanf("%s", day);

    if (age < 18)
    {
        if (strcmp(day, "Wednesday") == 0)
        {
            printf("Ticket price = Rs.120");
        }
        else
        {
            printf("Ticket price = Rs.150");
        }
    }
    else
    {
        if (strcmp(day, "Saturday") == 0 || strcmp(day, "Sunday") == 0)
        {
            printf("Ticket price = Rs.250");
        }
        else
        {
            printf("Ticket price = Rs.200");
        }
    }

    return 0;
}