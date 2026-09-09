#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for(int i = 0; name[i] != '\0'; i++)
    {
        name[i] = toupper(name[i]);
    }

    printf("Name in uppercase: %s", name);

    return 0;
}