#include <stdio.h>
#include <stdlib.h>

void resetting()
{
    fputs("Resseting...", stdout);
}

void sign_off()
{
    fputs("Signing off", stdout);
}

void test()
{
    fputs("Testing\n", stdout);
}

FILE *pFile(const char *filename)
{
    FILE *infile = NULL;

    if ((infile = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Cannot open file %s for reading.\nExiting...", filename);
        exit(EXIT_FAILURE);
    }
    return infile;
}

/*========== exit() ========== atexit() ========== abort() ==========*/

// int main()
// {
//     const char *filename = "C:\\Desktop\\esp32_monitoring.html.txt";
//     FILE *ptr = pFile(filename);

//     int input = 0;
//     atexit(sign_off);

//     fputs("Enter a value: ", stdout);
//     if((scanf("%d", input)) != 1)
//     {
//         fputs("Not an interger\n", stdout);
//         // abort(); // Abnormal termination. Not like the exit(). Generates core file.
//         atexit(resetting);
//         exit(EXIT_FAILURE);
//     }
//     return 0;
// }

/*===================================================================*/

/*============================= qsort() =============================*/

static int compare(const void *, const void *);

/*  qsort(param1, param2, param3, param4)
    param1: the data we want to sort (array). Pointer to the first elemento of the array.
    param2: the number of elements in the array.
    param3: the size -in bytes- of each element of the array.
    param4: the name of the function which compares two elements.*/


int main()
{
    int data[5] = {54, 3, 12, 9, 24};
    qsort(data, 5, sizeof(int), compare);

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n", data[i]);
    }
    
    return 0;
}

static int compare(const void *p1, const void *p2)
{
    const int x = *(const int *)p1;
    const int y = *(const int *)p2;

    // return x - y;       // increasing order
    return y - x;    // decreasing order
}

/*  The return value of compare will affect the sorting order
    < 0 if x should go before y
    = 0 if x is equivalent to y
    > 0 if x should go after y
*/