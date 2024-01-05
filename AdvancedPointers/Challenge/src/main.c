#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));   // allocate memory
}

int main()
{
    /*------------------------------------------------------------------------------*/
    // int a = 10;

    // int *i_ptr = NULL;
    // int **dp = NULL;

    // i_ptr = &a;
    // dp = &i_ptr;

    // printf("Value of a: %d\nAddress of a: %p\nValue of *i_ptr: %d\nAddress of i_ptr: %p\nAddress of dp: %p\nValue of *dp: %p\nValue of **dp: %d\n", a, &a, *i_ptr, &i_ptr, &dp, *dp, **dp);
    
    /*------------------------------------------------------------------------------*/

    // This will not work. We allocate memory for a copy of ptr and then we go out of scope.
    // The solution is to use a double pointer as a parameter in the allocateMemory().

    // int *ptr = NULL;

    // allocateMemory(ptr);
    // *ptr = 20;

    // printf("%d\n", *ptr);
    // free(ptr);
    /*------------------------------------------------------------------------------*/

    int *ptr = NULL;
    allocateMemory(&ptr);

    *ptr = 20;
    printf("%d\n", *ptr);


    return 0;
}