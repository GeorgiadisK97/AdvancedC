#include <stdio.h>

#define LOOP 5

int main()
{
    size_t i = 0;
    double input = 0, sum = 0, average = 0;
    // for (i = 0; i < LOOP; i++)
    // {
    //     printf("Enter number: ");
    //     scanf("%lf", &input);
    //     if (input < 0.0)
    //     {
    //         goto jump;
    //     }
    //     sum += input;
    // }

    // jump:
    //     average = sum/(i-1);
    //     printf("Sum = %.f\n", sum);
    //     printf("Average = %.f", average);

    for (i = 0; i < LOOP; i++)
    {
        printf("Enter number: ");
        scanf("%lf", &input);
        if (input < 0.0)
        {
            continue;
        }
        sum += input;
    }
    printf("Sum = %.f\n", sum);

    return 0;
}