#include <stdio.h>
int main()
{
    int ch;
    long int counter = 0;
    size_t i = 0;
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    fseek(pfile, 0, SEEK_END);  // Go the the end of file
    counter = ftell(pfile);     // Store the position to counter
    while (i < counter)
    {
        i++;
        fseek(pfile, -i, SEEK_END); // Increase the offset 'i', everytime I read a character. The minus '-i', is because we are going backwards.
                                    // Everytime we read the character, go to the NEW end of file + the offset i. 
        printf("%c", fgetc(pfile));
    }
    fclose(pfile);
    pfile = NULL;
    return 0;
}