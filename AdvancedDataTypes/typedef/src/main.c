#include <stdio.h>

typedef int* int_pointer;

int main()
{
    int_pointer ptr;            // same as int *ptr
    int_pointer a, *b;          // same as int *a, **b
    int_pointer myArray[10];    // same as int *myArray[10]

    
    printf("%d", *myArray[1]);
    return 0;
}