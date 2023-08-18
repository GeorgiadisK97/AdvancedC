#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w+");
    int ch;
    if(pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    for (ch = 33; ch <= 100; ch++)
    {
        fputc(ch, pfile);
    }
    fclose(pfile);
    pfile = NULL;
    return 0;
}