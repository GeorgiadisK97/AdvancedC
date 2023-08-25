#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return (n*factorial(n-1));
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n", n, &n);
}


int main()
{
    int a = 10;
    printf("Factorial of: %d is %d", a, factorial(a));

    up_and_down(1);
    return 0;
}