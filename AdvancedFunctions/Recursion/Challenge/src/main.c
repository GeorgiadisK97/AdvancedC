#include <stdio.h>

inline static void print()
{
    printf("Hello");
}

int sum_rec(int n)
{
    if (n == 0)
        return 0;
    return (n + sum_rec(n - 1));
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else if (a < b)
        return GCD(b, a);
    return GCD(b, a % b);
}

int main()
{
    // printf("Sum of 5: %d\n", sum_rec(5));
    // printf("GCD: %d", GCD(3, 5));
    print();
    return 0;
}

