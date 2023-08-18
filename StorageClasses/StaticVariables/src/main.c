#include <stdio.h>

int initialize()
{
    return 10;
}

int func(){
    static int count = 0;   // It's not an assignment. Initialized only once.

    // static int var = initialize();  This is NOT allowed in C. Must be assigned to a const value.

    int local = 0;          // Automatic
    printf("Automatic: %d, Static: %d\n", local, count);
    ++count;
    ++local;
    return count;
}


int main()
{
    for(int i = 0; i < 5; i++){
        static int n = 0;   // Static variables are only initialized once in declaration. This is not an assignment. 
        printf("%d", ++n);  // prints 1 2 3 4 5 - previous value remains
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        func();
    }
    return 0;
}