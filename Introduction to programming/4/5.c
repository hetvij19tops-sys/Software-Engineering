#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float amount;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your last order amount: ");
    scanf("%f", &amount);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Last order amount: %.2f\n", amount);

    return 0;
}