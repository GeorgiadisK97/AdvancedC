#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++){
        auto int n = 0;     // auto can be excluded
        // int n = 0;
        printf("%d", ++n);  // prints 1 1 1 1 1 - previous value is lost
    }
    return 0;
}