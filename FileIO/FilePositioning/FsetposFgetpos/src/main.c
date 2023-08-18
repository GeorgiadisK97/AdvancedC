#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    fpos_t position;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w+");
    if (pfile == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    fgetpos(pfile, &position);
    fputs("Hello World", pfile);
    // fgetpos(pfile, &position); 
                                        /* If I comment this command, the position will be 0(beginning of file), since I get the position before fputs(). If I uncomment this,
                                        the position will be to the end of "Hello World". Therefore, there will be no overwriting.*/
    fsetpos(pfile, &position);
    fputs("This is going to override previous content", pfile);

    fclose(pfile);
    pfile = NULL;
    return 0;
}