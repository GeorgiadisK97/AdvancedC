#include <stdio.h>
#include <malloc.h>
#include <string.h>

void display(char **output)
{
    printf("%s\n", *output);
}

void d_display(double **pointer)
{
    printf("Number: %f\n", **pointer);
}

void i_display(int **pointer)
{
    printf("Number: %d\n", **pointer);
}

void foo(char **ptr)
{
    *ptr = malloc(255);
    strcpy(*ptr, "Hello World!");
}
int main()
{
    // int a = 10;

    // int *p1 = NULL;
    // int **dp = NULL;

    // p1 = &a;
    // dp = &p1;

    // printf("Address of a = %p\n", &a);
    // printf("Address of p1 = %p\n", &p1);
    // printf("Address of p2 = %p\n", &dp);

    // /*p1 points to 'a'. So p1 contains the address of 'a' therefore *p1 = 10.( a = 10 )
    //   dp points to p1. So dp contains the address of p1 therefore *dp = address of p1 and **dp = 10 (**dp = *p1 = a = 10) */

    // printf("\nValue at the address stored by p2 = %p\n", *dp);
    // printf("Value at the address stored by p1 = %d\n", *p1);
    // printf("Value of **p2 = %d\n", **dp);

    /*-------------------------------------------------------*/

    // int i = 5, j = 6, k = 7;

    // int *p1 = &i, *p2 = &j;
    // int **dp = &p1;

    // printf("i: %d\nj: %d\nk: %d\n", i, j, k);
    // printf("\nAddress of i: %p\nAddress of j: %p\nAddress of k: %p\n", &i, &j, &k);
    // printf("\nAddress of p1: %p\nAddress of p2: %p\nAddress of dp: %p\n", &p1, &p2, &dp);

    // printf("\n*p1: %d\n", *p1);
    // printf("*p2: %d\n", *p2);
    // printf("*dp: %p\n", *dp);
    // printf("**dp: %d\n", **dp);

    // *dp = p2;   // p1 now points to j, because *dp = p1.
    // printf("**dp: %d\n", **dp);

    // char *str = "This is a test\n";
    // display(&str);  // dislpay() expects a double pointer, meaning the address of a pointer. So we add the '&' operator to str.

    // double z = 10;
    // double o = 20;
    // double *ptr = &z;
    // double **double_ptr = &ptr;

    // d_display(double_ptr);
    // d_display(&ptr);    // It's the same as the command above.

    /*-------------------------------------------------------*/

    char *ptr = NULL;
    foo(&ptr);
    printf("%s\n", ptr);

    free(ptr);

    return 0;
}