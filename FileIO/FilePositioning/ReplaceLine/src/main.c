#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    FILE *dest_pfile = NULL;
    char *filename = "myfile.txt";
    char *dest_filename = "destination.txt";
    int ch;
    int counter = 0;
    pfile = fopen(filename, "r");
    dest_pfile = fopen(dest_filename, "w");
    if (pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    if (dest_pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    while ((ch = fgetc(pfile)) != EOF)
    {
        if (ch != '\n')
        {
            fputc(ch, dest_pfile);
        }
        else
        {
            counter++;
            fputc(ch, dest_pfile);
        }
        if(counter == 1)
        {
            fputs("Line replaceed", dest_pfile);
            counter++;
        }

    }
    fclose(pfile);
    pfile = NULL;
    fclose(dest_pfile);
    dest_pfile = NULL;

    return 0;
}