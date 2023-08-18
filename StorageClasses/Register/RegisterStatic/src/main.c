// C program that demonstrates register can not be used with
// static
 
#include <stdio.h>
 
int main()
{
    // Declaring an integer variable 'i' and initializing it
    // with 10
    int i = 10;
    // ERROR: Attempting to use both register and static
    // storage classes for 'a'
    register static int* a = &i; // This is NOT allowed. 
    printf("%d", *a);
    getchar();
    return 0;
}