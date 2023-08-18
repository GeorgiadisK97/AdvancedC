#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct intPtr
{
    int *ptr1;
    int *ptr2;
    char *name;
};

void main()
{
    char myname[13] = "Konstantinos";
    //Declaring and Initializing a pointer to struct
    struct intPtr *var = NULL;
    //Allocate memory in the heap for the pointer
    var = (struct intPtr*)malloc(sizeof(struct intPtr));

    int a = 100;
    //Allocate memory in the heap for the pointer of the struct
    var->ptr1 = (int *)malloc(sizeof(int));
    //Memory on the stach for the second pointer of the struct
    var->ptr2 = &a;

    *var->ptr1 = 300;
    *var->ptr2 = 200;
    
    var->name = (char *)malloc(sizeof(char));
    strcpy(var->name, myname);

    printf("Values: %d\t%d\t%s", *var->ptr1, *var->ptr2, var->name);

    //De-allocate the memory
    free(var);
    var = NULL;

}