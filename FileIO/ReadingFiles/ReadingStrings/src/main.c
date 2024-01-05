#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    char buffer[SIZE];

    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    while (fgets(buffer, SIZE, pfile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pfile);
    pfile = NULL;
    return 0;
}