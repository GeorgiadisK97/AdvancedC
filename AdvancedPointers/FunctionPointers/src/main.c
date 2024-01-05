#include <stdio.h>

int square(int a){
    return a*a;
}

int main()
{
    int (*pfunction)(int) = NULL;
    pfunction = square;

    int value = 0;
    value = pfunction(5);
    printf("%d\n", value);
    return 0;
}