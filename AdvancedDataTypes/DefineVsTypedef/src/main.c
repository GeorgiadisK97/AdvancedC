#include <stdio.h>

#define int_pointer int *

typedef char *char_ptr;

int main()
{
    int_pointer chalk, cheese; /*int_pointer *chalk, cheese;
                               Same as int *chalk, cheese. In this case, only chalk is a pointer to int, while cheese in an integer.
                               For cheese to be a pointer too, I have to type it like this -> int_pointer chalk, *cheese.
                               This only happens with the #define directive. When we use typedef, every variable following it, will be a pointer without adding
                               the '*'.*/

    char_ptr Bentley, Rolls_Royce; /*char_ptr *Bentley, *Rolls_Royce;
                                    Same as char *Bentley, *Rolls_Royce. In this case both pointers are pointers to char.*/
    return 0;
}