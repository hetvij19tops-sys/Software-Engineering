#include <stdio.h>

void formatFollowerCount(int count)
{
    if(count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    else if(count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    else
    {
        printf("%d", count);
    }
}

int main()
{
    formatFollowerCount(1500);
    printf("\n");

    formatFollowerCount(1200000);
    printf("\n");

    formatFollowerCount(500);

    return 0;
}