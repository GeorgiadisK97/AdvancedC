#include <stdio.h>

#define SUM(a, b) ((a) + (b))


int main()
{
    int x = 10, y = 30, z = 0;
    z = SUM(x, y);
    printf("Sum: %d", z);
    return 0;
}