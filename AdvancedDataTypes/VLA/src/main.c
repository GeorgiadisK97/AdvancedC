#include <stdio.h>
#include <stdlib.h>

int sum2d(int rows, int cols, int array[rows][cols])
{
    int r, c, total = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            total += array[r][c];
    return total;
}

int main()
{
    int myArray[3][4] = {
        {0, 1, 2, 3},
        {14, 15, 16, 17}

    };
    printf("Total is : %d\n", sum2d(3, 4, myArray));
    return 0;
}