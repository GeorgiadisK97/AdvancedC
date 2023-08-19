#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_MAX 255

int main()
{
    /*-------------------- fgets() -------------------- */
    // char buffer[LINE_MAX];
    // int ch = 0;
    // char *p = NULL;

    // if (fgets(buffer, sizeof(buffer), stdin))
    // {
    //     p = strchr(buffer, '\n');
    //     if (p)
    //         *p = '\0';
    //     else
    //         while (((ch = getchar()) != '\n') && !ferror(stdin) && !feof(stdin))
    //             ;
    // }
    // else
    // {
    //     perror("fgets failed");
    // }
    // printf("Buffer: %s", buffer);

    /*-------------------- getline() -------------------- */ // PREFFERED METHOD FOR INPUT

    char *buffer = NULL;   // string will be stored in buffer
    size_t buff_size = 32; // size for the string. If the string exceeds this size, getline will realloc by itself
    size_t characters;
    buffer = (char *)malloc(buff_size * sizeof(char)); // allocate memory for the string

    if (buffer == NULL) // check for malloc failure
        exit(1);

    printf("Input: ");
    characters = getline(&buffer, &buff_size, stdin); // string input. getline() returns the numbers of characters in input

    printf("%zu characters were read\n", characters);
    buffer[characters - 1] = '\0';
    printf("You entered: '%s' ", buffer);

    free(buffer);
    return 0;
}