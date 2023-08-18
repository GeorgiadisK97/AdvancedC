// C Program to demonstrate use of bitwise operators
#include <stdio.h>

typedef long long binary;

int main()
{
    binary a = 0b00000101, b = 0b00001001;
    binary c = 154, d = 0b11111101;
    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %lld\n", a & b); /*00000101
                                     00001001
                                    ----------
                                     00000001 -> 1*2^0 = 1*/

    // The result is 00001101
    printf("a|b = %d\n", a | b); /*00000101
                                   00001001
                                  ----------
                                   00001101 -> 1*2^0 + 1*2^2 + 1*2^3 = 13*/

    // The result is 00001100
    printf("a^b = %lld\n", a ^ b); /*00000101
                                     00001001
                                    ----------
                                     00001100 -> 1*2^2 + 1*2^3 = 12*/

    // The result is 11111010
    printf("~a = %lld\n", a = ~a); /*00000101
                                     00001001
                                    ----------
                                     11111010 -> 1*2^1 + 1*2^3 + 1*2^4 + 1*2^5 + 1*2^6 + 1*2^7 = -6 or 250*/

    /*I can swap two number with XOR without the need of a third variable (like bubble-sort)*/

    printf("\na: %d b: %d", a, b);
    // Swap
    a ^= b;
    b ^= a;
    a ^= b;
    printf("\na: %d b: %d", a, b);

    //--------------------------------------------------------------------------------------------

    printf("\n%lld", ~(c));

    return 0;
}