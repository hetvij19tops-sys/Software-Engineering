#include <stdio.h>

void countdown(int n)
{
    if(n == 0)
    {
        printf("Blast off!");
        return;
    }

    printf("%d\n", n);
    countdown(n - 1);
}

int main()
{
    int n = 5;

    countdown(n);

    return 0;
}