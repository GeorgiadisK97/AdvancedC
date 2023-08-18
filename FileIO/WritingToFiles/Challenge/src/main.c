#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *pfile = NULL;
    FILE *temp_pfile = NULL;
    char *filename = "myfile.txt";
    char *temp_filename = "temp.txt";

    int ch;

    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    temp_pfile = fopen(temp_filename, "w+");
    if(temp_pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    while((ch = fgetc(pfile)) != EOF)
    {
        fputc(toupper(ch), temp_pfile);
    }
    fclose(temp_pfile);
    fclose(pfile);
    rename(temp_filename, filename);
    remove(temp_filename);
    pfile = NULL;
    temp_pfile = NULL;

    
    return 0;
}