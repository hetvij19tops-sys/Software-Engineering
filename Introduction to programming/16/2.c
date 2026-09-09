#include <stdio.h>
#include <string.h>

void copyCaption(char source[], char destination[])
{
    strcpy(destination, source);

    printf("Copied Caption: %s", destination);
}

int main()
{
    char caption[] = "Enjoying the little moments!";
    char copiedCaption[100];

    copyCaption(caption, copiedCaption);

    return 0;
}