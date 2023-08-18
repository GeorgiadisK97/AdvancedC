#include <stdio.h>

int main(void)
{
    int w1 = 3; // 0000 0000 0000 0000 0000 0000 0000 0011 -> 32 bits -> 4 bytes
    int result = 0;

    result = w1 << 1; // 0000 0000 0000 0000 0000 0000 0000 0110 
    printf("%d", result);


    int w2 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010

    result = w2 << 2; // 0000 0000 0000 0000 0000 0010 0010 1000
    printf("\n%d", result);

    unsigned int w3 = 4151832098; // 1111 0111 0111 0111 1110 1110 0010 0010

    result = w3 >> 1; 
    printf("\n%d", result);

    signed int w4 = 138; // 0000 0000 0000 0000 1000 1010
    result = w4 >> 2;
    printf("\n%d", result);

    

    return 0;
}