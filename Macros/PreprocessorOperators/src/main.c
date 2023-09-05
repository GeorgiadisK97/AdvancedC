#include <stdio.h>

// Operator: '\'
#define MAX(a, b)\
    ((a) > (b) ? a : b)

// Operator: defined()
#if defined(WINDOWS) || defined(WINDOWSNT)
#define BOOT_DRIVE "C:/"
#else
#define BOOT_DRIVE "D:/"
#endif

// Operator: '#'
#define HELLO(x) printf("Hello, " #x "\n")  // Adds "" to x 

// Operator: '#'
#define str(x) #x   // Adds "" to x

// Operator: '#'
#define printint(variable) printf(#variable ": %i\n", variable)    // Practical

// Operator: '##'
#define make_function(name) int my_##name(int x){printf("%d", x);}

int main()
{
    int x = MAX(1, 2);
    printf("MAX: %d\n", x);

    printf("BOOT_DRIVE: %s\n", BOOT_DRIVE);

    HELLO(John);  

    printf(str(testing)"\n");

    printint(x);

    make_function(bar);    // Creates a function called my_bar(int x)

    my_bar(1);    // We used the function created by the macro

    return 0;
}