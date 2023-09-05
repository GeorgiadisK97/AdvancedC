#include <stdio.h>

#if __STDC_VERSION__ == 201112L
#error Not C11
#endif


#define LIMIT 4
#define CHECK

#define US 0
#define UK 1
#define France 2
#define Germany 3
#define Country 2


// #pragma GCC poison printf

// #pragma GCC warning "Warning"
// #pragma GCC error "Error"
// #pragma GCC message "Message"

int main()
{
    // int total = 0;
    // for (size_t i = 0; i < LIMIT; i++)
    // {
    //     total += i;
    // }

    // #ifdef CHECK
    //     printf("Total: %d\n", total);
    // #endif
    
    // #if Country == US || Country == UK
    //     #define Greeting "Hello"
    // #elif Country == France
    //     #define Greeting "Bonjour"
    // #elif Country == Germany
    //     #define Greeting "Guten Tag"
    // #endif

    // printf("Greeting is: %s", Greeting);

    // ---------------------------------------------------

    printf("Hello\n");  // Error, poisoned



    return 0;
}