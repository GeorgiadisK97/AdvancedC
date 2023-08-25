#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *buffer = "Hello there";
    size_t size = 32;

    printf("buffer address: %p", buffer);
    printf("Character address: %p", buffer[0]);
    return 0;
}