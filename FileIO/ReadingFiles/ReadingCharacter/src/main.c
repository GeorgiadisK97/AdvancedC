#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *pfile = NULL;
    char* filename = "myfile.txt";
    char ch;
    pfile = fopen(filename, "r");
    if(pfile == NULL)
    {
        perror("Failed to open file");
        return -1;
    }
    while((ch = fgetc(pfile)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(pfile);
    pfile = NULL;
    return 0;
}