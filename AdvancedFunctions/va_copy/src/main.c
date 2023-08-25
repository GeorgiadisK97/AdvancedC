#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double sample_stddev(int num_args, ...)
{
    double sum = 0;
    va_list args;
    va_start(args, num_args);

    va_list args_copy;
    va_copy(args_copy, args);

    for (size_t i = 0; i < num_args; i++)
    {
        double num = va_arg(args, double);
        sum += num;
    }

    va_end(args);

    double mean = sum / num_args;
    double sum_sq_diff = 0;
    for (size_t i = 0; i < num_args; i++)
    {
        double num = va_arg(args_copy, double);
        sum_sq_diff += (num - mean) * (num - mean);
    }

    va_end(args_copy);

    return sqrt(sum_sq_diff / num_args);
}

int main()
{
    printf("%f\n", sample_stddev(4, 25.0, 27.3, 26.9, 25.7));
    return 0;
}