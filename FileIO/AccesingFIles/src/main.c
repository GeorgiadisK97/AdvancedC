#include <stdio.h>

int create_file()
{
    FILE *pfile = NULL;
    char *filename = "C:/Desktop/myfile.txt";
    pfile = fopen(filename, "w");
    if (pfile == NULL)
    {
        
        perror("Failed to open");
        return -1;
    }
    else
        printf("File opened");
    return 0;
}

void main()
{
    create_file();
}