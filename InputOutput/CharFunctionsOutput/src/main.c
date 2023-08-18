#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*-------------------- putc() FILE --------------------*/
    // int ch = '\0';
    // FILE *p_file = NULL;
    // char *filename = "C:\\Desktop\\TEST.txt";

    // if ((p_file = fopen(filename, "rw")))
    // {
    //     printf("TEST file opened\n");

    //     ch = getc(p_file);
    //     while (ch != EOF)
    //     {
    //         putc(ch, p_file);
    //         ch = getc(p_file);
    //     }
    // }
    // else
    // {
    //     printf("Failed to open file");
    //     exit(1);
    // }

    // fclose(p_file);
    // p_file = NULL;

    /*-------------------- putc() stdout --------------------*/
    // int ch = 'd';
    // putc(ch, stdout);

    /*-------------------- putchar() --------------------*/
    /*-------------------- Example 1 --------------------*/
    // char string[] = "Hello Konstantinos, \nwhatever!";
    // int i = 0;

    // while (string[i] != '\0')
    // {
    //     if (string[i] != '\n')
    //         putchar(string[i]);
    //     i++;
    // }

    /*-------------------- Example 2 --------------------*/
    // int ch = 0;
    // while((ch = getchar()) != EOF) // EOD = Ctrl + D
    //     putchar(ch);
    // printf("Done\n");

    /*-------------------- fputc() --------------------*/

    int ch = 0;
    FILE *p_file = NULL;

    char *filename = "C:\\Desktop\\TEST.txt";

    if((p_file = fopen(filename, "w")) != NULL)
    {
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
            fputc(ch, p_file);
        }
    }
    else
    {
        printf("Failed to open file");
        exit(1);
    }
    fclose(p_file);
    p_file = NULL;


    return 0;
}