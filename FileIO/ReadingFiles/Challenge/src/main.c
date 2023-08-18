#include <stdio.h>


int main()
{
    FILE *pfile = NULL;
    char ch ,*filename = "myfile.txt";
    int counter = 0;

    pfile = fopen(filename, "r");
    if(pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    while((ch = fgetc(pfile)) != EOF)
    {
        if(ch == '\n')
            counter++;
    }
    printf("Number of lines: %d", ++counter);
    fclose(pfile);
    pfile = NULL;
    return 0;
}