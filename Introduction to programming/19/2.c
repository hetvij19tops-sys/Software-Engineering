#include <stdio.h>
#include <stdbool.h>

struct FoodItem
{
    char name[50];
    float price;
    bool isVeg;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Paneer Pizza", 299.00, true},
        {"Chicken Burger", 199.00, false},
        {"Veg Sandwich", 149.00, true}
    };

    printf("Veg Items:\n");

    for(int i = 0; i < 3; i++)
    {
        if(menu[i].isVeg == true)
        {
            printf("%s - Rs. %.2f\n", menu[i].name, menu[i].price);
        }
    }

    return 0;
}