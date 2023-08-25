#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 256
int main(int argc, char *argv[])
{
    int flag = '\0';
    char buffer[MAX_SIZE];
    FILE *p_file = NULL;
    const char *filename = argv[2];
    if ((p_file = fopen(filename, "r")) == NULL)
    {
        printf("Failed to open file");
        exit(EXIT_FAILURE);
    }

    else
    {
        printf("Given character to check: %c\n", *argv[1]);
        while (fgets(buffer, sizeof(buffer), p_file))
        {
            printf("\nBuffer: %s", buffer);
            for (size_t i = 0; i < strlen(buffer); i++)
            {
                if (buffer[i] == *argv[1] || buffer[i] == toupper(*argv[1]))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
                if (feof(p_file))
                {
                    printf("\n");
                    break;
                }
            }
            if (flag == 1)
            {
                printf("This line does contain the character\n");
                flag = 0;
            }

            else
                printf("This line does NOT contain the character\n");
        }
    }
    fclose(p_file);
    p_file = NULL;

    return 0;
}