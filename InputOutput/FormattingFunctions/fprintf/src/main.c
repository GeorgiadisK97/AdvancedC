#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    FILE *pfile = NULL;
    const char *filename = "C:\\Desktop\\TEST.txt";

    if ((pfile = fopen(filename, "r+")) == NULL)
    {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < 10; i++)
    {
        fprintf(pfile, "Number: %zu\n", i);
    }

    fseek(pfile, 0, SEEK_SET); 
    
    while (!feof(pfile))
    {
        fgets(string, 100, pfile);
        printf("%s", string);
    }
    


    fclose(pfile);
    pfile = NULL;
    return 0;
}