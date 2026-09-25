#include <stdio.h>

int main() {
    FILE *file;
    char product[100];
    int n, i;

    file = fopen("wishlist.txt", "w");

    printf("Enter number of products: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Enter product %d: ", i + 1);
        fgets(product, 100, stdin);
        fprintf(file, "%s", product);
    }

    fclose(file);

    file = fopen("wishlist.txt", "r");

    printf("\nYour Wishlist:\n");

    while (fgets(product, 100, file) != NULL) {
        printf("- %s", product);
    }

    fclose(file);

    return 0;
}