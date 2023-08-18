#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "r");
    if(pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    fseek(pfile, 0, SEEK_END);  // Sets the pointer to the end of the file

    long int len = 0;
    len = ftell(pfile); // Returns the location of the pointer. Since we set it to the EOF, it will return the bytes of the file.
    fclose(pfile);
    pfile = NULL;
    printf("Position: %li", len);
    return 0;
}