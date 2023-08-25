#include <stdio.h>

int main()
{
    char *buffer = "Hello World 2023";

    char str1[10], str2[10];
    int year = 0;
    sscanf(buffer, "%s %s %d", str1, str2, &year);

    printf("String 1: %s\nString 2: %s\nYear: %d", str1, str2, year); 
    return 0;
}