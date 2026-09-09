#include <stdio.h>
#include <string.h>

int getStringLength(char title[])
{
    return strlen(title);
}

int main()
{
    char title[] = "Shape of You";

    printf("Length of song title = %d", getStringLength(title));

    return 0;
}