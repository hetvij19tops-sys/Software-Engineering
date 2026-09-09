#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(a, b);

    printf("After swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}