#include <stdio.h>

struct Product
{
    char name[50];
    float price;
    int stock;
};

void updateStock(struct Product *p)
{
    if(p->stock > 0)
    {
        p->stock = p->stock - 1;
        printf("Item bought successfully.\n");
    }
    else
    {
        printf("Item is out of stock.\n");
    }
}

int main()
{
    struct Product product = {"Wireless Mouse", 799.00, 5};

    printf("Before buying:\n");
    printf("Product: %s\n", product.name);
    printf("Price: Rs. %.2f\n", product.price);
    printf("Stock: %d\n", product.stock);

    updateStock(&product);

    printf("\nAfter buying:\n");
    printf("Product: %s\n", product.name);
    printf("Price: Rs. %.2f\n", product.price);
    printf("Stock: %d\n", product.stock);

    return 0;
}