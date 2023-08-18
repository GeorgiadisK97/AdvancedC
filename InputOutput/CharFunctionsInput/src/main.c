#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*------------------- getc() --------------------*/
    // char ch1 = '\0';
    // printf("Enter a character: ");
    // ch1 = getc(stdin);
    // printf("You entered: %c\n", ch1);


    /*-------------------- getchar() --------------------*/
    // char ch2 = '\0';
    // printf("Enter a character: ");
    // ch2 = getchar();
    // printf("You entered: %c\n", ch2);

    /*-------------------- fgetc() --------------------*/
    // FILE *fp = NULL;
    // int ch = 0;
    // char *filename = "C:\\Desktop\\TEST.txt"; // Create a TEST file in Desktop in order for this to work.

    // fp = fopen(filename, "r");

    // if(fp  == NULL)
    // {
    //     perror("Failed to open file");
    //     exit(1);
    // }

    // printf("Reading from file\n");

    // while (1)
    // {
    //     if((ch = fgetc(fp)) != EOF)
    //     {
    //         printf("%c", ch);
    //     }
    //     else
    //         break;
        
    // }
    // fclose(fp);
    // fp = NULL;

    /*--------------------ungetc()--------------------*/

    char ch = 0;
    while(isspace(ch = (char)getchar())); // Read as long as there are spaces.
    ungetc(ch, stdin);                    // Put back to the stream the non-space character.

    printf("Char is %c", getchar());      // Get the character from the stream.

    return 0;
}