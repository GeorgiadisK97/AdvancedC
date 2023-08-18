#include <stdio.h>
#include <stdlib.h>
struct s
{
    int arraySize;
    int array[];
};

int main()
{
    int size;
    struct s *ptr = NULL;
    ptr = malloc(sizeof(struct s) + size * sizeof(int));
    free(ptr);
    ptr = NULL;
    return 0;

}