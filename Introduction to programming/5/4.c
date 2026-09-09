#include <stdio.h>

int main()
{
    int likes = 0;

    printf("Likes = %d\n", likes);

    likes = ++likes;
    printf("After pre-increment = %d\n", likes);

    likes++;
    printf("After post-increment = %d\n", likes);

    return 0;
}