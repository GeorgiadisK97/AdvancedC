#include <stdio.h>
#include <stdbool.h>
typedef long long binary;

bool readBit(binary byte, int bit)
{
    //Right shift bit times and perform AND with 00000001
    byte = (byte >> bit) & 1;
    return (byte) ? true : false;
}

binary setBit(binary byte, int bit)
{
    //Left shift bit-times the 00000001 and perform OR with the given byte
    byte = (1 << bit) | byte;
    return byte;
}


int main()
{
    printf("Enter number: ");
    int number, n, bit;
    scanf("%d", &number);
    printf("Enter bit to read: ");
    scanf("%d", &n);
    if(readBit(number, n))
        printf("Bit is 1");
    else
        printf("Bit is 0");

    printf("\nWhich bit you want to set: ");
    scanf("%d", &bit);
    printf("%lld in decimal", setBit(number, bit));
    return 0;
}