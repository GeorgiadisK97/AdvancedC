#include <stdio.h>

int main()
{
    char string[100];
    int a = 10, b = 20;
    sprintf(string, "Hello, these are the numbers and their sum: %d %d Sum: %d", a, b, a + b);
    puts(string);
    return 0;
}