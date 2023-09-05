#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    fprintf(stdout, "Program last compiled at %s %s\n", __DATE__, __TIME__);
    int counter = 0;
    if (argc == 1)
    {
        int ch = 0;
        printf("Mode: Reading from stdin\n");
        FILE *p_file = stdin;
        while ((ch = getchar()) != EOF)
            ++counter;
        printf("Number of characters: %d\n", counter - 1); // -1 for EOF
    }
    else
    {
        int ch = 0;
        printf("Mode: Reading from file\n");
        FILE *p_file = NULL;
        char *filename = argv[1];
        printf("File location: %s\n", filename);
        printf("Attempt to open file...");
        if ((p_file = fopen(filename, "r")) != NULL)
        {
            printf("Done\n");
            while ((ch = fgetc(p_file)) != EOF)
            {
                ++counter;
            }
        }
        else
        {
            fprintf(stderr,"Failed to open file");
            exit(EXIT_FAILURE);
        }
        printf("Number of characters: %d\n", counter);
        printf("Closing File\n");
        fclose(p_file);
        p_file = NULL;
    }

    return 0;
}