#include <stdio.h>

#define PI 3.14

#define PRNT(a, b)              \
    printf("value a: %d\n", a); \
    printf("value a: %d\n", b);    

#define CIRCLE_AREA(X) ((PI) * (X) * (X))

#define Warning(...) fprintf(stderr, __VA_ARGS__)



int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World!";
    int x = 1, y = 2;
    PRNT(x, y);
    int z = CIRCLE_AREA(10);
    int p = CIRCLE_AREA(x + 2);
    printf("Circle area of 10: %d\n", z);
    printf("Circle area of x + 2: %d\n", p);
    Warning("%s %s\n", str1, str2);
    return 0;
}