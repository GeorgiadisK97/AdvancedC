#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char* filename = "C:\\Desktop\\TEST.txt";
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    if((fp = fopen(filename, "w+")) == NULL)
    {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    fputs("We are in 2023", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);

    fclose(fp);

    return (0);
}