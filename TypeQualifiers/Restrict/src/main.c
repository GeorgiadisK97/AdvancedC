#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    const int z;
    int array[10];
    int *restrict restar = (int*)malloc(10*sizeof(int));
    int * par = array;
    int x = 10;
    int * restrict ptr1 = &x;
    int * restrict ptr2 = NULL;
    ptr2 = ptr1;        // UB

    printf("%d", *ptr2); 

    for (size_t i = 0; i < 10; i++)
    {
        par[i] += 5;
        restar[i] += 5;
        array[i] *= 2;
        par[i] += 3;
        restar[i] += 3;
    }
    
    free(restar);
    restar = NULL;

    return 0;
}