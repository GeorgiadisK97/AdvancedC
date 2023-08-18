#include <stdio.h>

int sum(int size)
{
    int array[size];
    int total = 0;
    for(size_t i = 0; i < size; ++i)
    {
        printf("Enter number for the %d element: ", i);
        scanf("%d", &array[i]);
        total += array[i];
    }
    return total;
}

int main()
{
    int number;
    printf("Enter number of elements: ");
    scanf("%d", &number);
    printf("Total is: %d", sum(number));
    return 0;
}