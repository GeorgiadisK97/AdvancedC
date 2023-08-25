#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*-------------------- puts() -------------------- */

    // char string[40];
    // strcpy(string, "Hello, how are you?\n");
    // puts(string);

    /*-------------------- fputs() -------------------- */

    FILE *p_file = NULL;
    char *filename = "C:\\Desktop\\TEST.txt";
    p_file = fopen(filename, "w");
    if (p_file != NULL)
    {
        fputs("Hello there, goodbye!", p_file);
    }
    else
        exit(EXIT_FAILURE);
    
    fclose(p_file);
    p_file = NULL;
    return 0;
}