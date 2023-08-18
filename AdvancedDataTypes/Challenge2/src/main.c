#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int length;
    int array[];
};

int main()
{
    struct myArray *ptr = NULL;
    int input;
    printf("Enter number of elements: ");
    scanf("%d", &input);
    ptr = malloc(sizeof(struct myArray) + input * sizeof(int));
    for (size_t i = 0; i < input; ++i)
    {
        printf("Enter number: ");
        scanf("%d", &ptr->array[i]);
    }
    for (size_t i = 0; i < input; ++i)
    {
        printf("Array[%d] = %d\n",i, ptr->array[i]);
    }
    free(ptr);
    ptr = NULL;
    return 0;
}