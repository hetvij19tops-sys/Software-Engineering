#include <stdio.h>

int countVowels(char review[])
{
    int count = 0;

    for(int i = 0; review[i] != '\0'; i++)
    {
        if(review[i] == 'a' || review[i] == 'e' ||
           review[i] == 'i' || review[i] == 'o' ||
           review[i] == 'u' ||
           review[i] == 'A' || review[i] == 'E' ||
           review[i] == 'I' || review[i] == 'O' ||
           review[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char review[200];

    printf("Enter your product review: ");
    fgets(review, sizeof(review), stdin);

    printf("Number of vowels = %d", countVowels(review));

    return 0;
}