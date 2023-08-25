#include <stdio.h>
#include <stdarg.h>

int max(int num_args, ...);

int main()
{
    printf("Max: %d", max(4, 10, 12, 14, 16));  // num_args: 4 -> which means I'm passing 4 parameters
    return 0;
}
int max(int num_args, ...)  // num_args: Number of arguments
{
    va_list args;


    va_start(args, num_args);
    int max = 0;
    for (size_t i = 0; i < num_args; i++)   
    {
        int x = va_arg(args, int);  // Read all the parameters 
        if (i == 0)
            max = x;
        else if (x > max)
            max = x;
    }

    va_end(args);   // If I'm using gcc or clang, this line is not nessecary
    return max;
}