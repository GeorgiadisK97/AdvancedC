#include <stdio.h>
#include <stdlib.h>

struct intPtr
{
    int *ptr1;
    int *ptr2;
};


void main()
{
    struct intPtr var;

    int a = 100, b;

    var.ptr1 = &a;
    var.ptr2 = &b;

    *var.ptr2 = 200;

    printf("Value 1: %d\nValue 2: %d", *var.ptr1, *var.ptr2);

}