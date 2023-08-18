#include <stdio.h>

struct Item
{
    char *itemName;
    char c;
    int quantity;
    float price;
    float amount;
};
void readItem(struct Item *ptr)
{
    printf("Enter name of the product: ");
    scanf("%s", ptr->itemName);     // The '&' is not needed here, cause the ptr->itemName is type of char, so it already is a pointer
    printf("Price: ");
    scanf("%f",&ptr->price);        // The '&' is needed here, because the ptr->price is type of int, so we need to pass the adress.
    printf("Quantity: ");
    scanf("%d", &ptr->quantity);    // Same here
    ptr->amount = ptr->price * ptr->quantity;
}

void print(struct Item *ptr)
{
    printf("Name of product: %s\nPrice: %f\nQuantity: %d\nAmount: %f", ptr->itemName, ptr->price, ptr->quantity, ptr->amount);
}

void main()
{
    struct Item item;           // Declare an element of the struct
    struct Item *ptr = NULL;    // Declare and initialize a pointer to the struct
    ptr = &item;                // Point to the adress of the item
    readItem(ptr);
    print(ptr);
}