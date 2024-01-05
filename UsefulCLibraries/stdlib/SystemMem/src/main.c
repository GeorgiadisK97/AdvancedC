#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main()
{
    char *command = "ls -l";
    system(command);

    char *str = NULL;

    assert((str = getenv("HOME")) != NULL);
    printf("Path: %s\n", str);
    assert((str = getenv("PATH")) != NULL);
    printf("Path: %s\n", str);

    return 0;
}