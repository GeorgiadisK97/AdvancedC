#include <stdio.h>

int main()
{
    char array[10];
    char array2[10];
    char *ptr = array;
    char *to = array2;
    while ((*ptr++ = getchar()) != '\t')
        ;
    ptr = array;
    while ((*to++ = *ptr++) != '\0')
        ;

    to = array2;
    for (size_t i = 0; i < 10; i++)
    {
        printf("%c", *to++);
    }

    return 0;
}