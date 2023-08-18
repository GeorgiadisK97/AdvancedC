#include <stdio.h>

int main()
{
    const int* ptr1 = NULL;     // Pointer to integers with constant value.
    int* const ptr2 = NULL;     // Constant pointer to integer. Value can change.

    int a = 10;
    int b = 20;

    ptr1 = &a;      // I can change the address of ptr1.
    ptr2 = &b;      // I cannot change the address of ptr2.

    *ptr1 = 30;     // I cannot change the value of *ptr1.
    *ptr2 = 40;     // I can change the value of *ptr2.

    return 0;
}