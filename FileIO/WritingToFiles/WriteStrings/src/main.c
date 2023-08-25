#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w+");
    if(pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    fputs("Hello, my name is Konstantinos and I'm from Greece. I'm currently studying C programming, because I want to have a job in Embedded Systems", pfile);
    fputs("\n", pfile);
    fputs("Goodbye!", pfile);
    fclose(pfile);
    pfile = NULL;
    return 0;
}