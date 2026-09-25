#include <stdio.h>
#include <stdlib.h>

int addNumbers(char a[], int b) {
    return atoi(a) + b;
}

int main() {
    printf("%d", addNumbers("5", 10));
    return 0;
}