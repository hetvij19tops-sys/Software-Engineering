#include <stdio.h>

int main()
{
    int choice;

    printf("1. Add item\n");
    printf("2. Remove item\n");
    printf("3. View total\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Add item selected");
            break;

        case 2:
            printf("Remove item selected");
            break;

        case 3:
            printf("View total selected");
            break;

        case 4:
            printf("Exit selected");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}