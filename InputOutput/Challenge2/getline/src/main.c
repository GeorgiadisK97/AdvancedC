#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    short flag = 0;
    char *buffer = NULL;
    size_t size = 32;
    FILE *p_file = NULL;
    const char *filename = argv[2];
    if ((p_file = fopen(filename, "r")) == NULL)
    {
        perror("Failed to open file");
    }
    else
        fputs("File opened\n", stdout);

    if ((buffer = (char *)malloc(size * sizeof(char))) == NULL)
    {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    while (getline(&buffer, &size, p_file) != EOF)
    {
        printf("Size of buffer: %zu\n", strlen(buffer));
        printf("Buffer: %s", buffer);
        for (size_t i = 0; i < strlen(buffer); i++)
        {
            if (buffer[i] == tolower(*argv[1]) || buffer[i] == toupper(*argv[1]))
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("This line does contain the character\n\n");
            flag = 0;
        }
        else
            printf("This line does NOT contain the character\n\n");
    }
    fclose(p_file);
    p_file = NULL;

    free(buffer);
}