#include <stdio.h>
#include <math.h>

typedef long long binary;

binary convertDecimalToBinary(int n)
{
   binary binaryNumber = 0;
   binary remainder, i = 1;

   while (n != 0)
   {
      remainder = n % 2;
      n = n / 2;
      binaryNumber += remainder * i;
      i = i * 10;
   }

   return binaryNumber;
}

int convertBinaryToDecimal(binary n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    binary bin;
    int dec;
    printf("Enter binary to convert: ");
    scanf("%lld", &bin);
    printf("Enter decimal to convert: ");
    scanf("%d", &dec);
    printf("Binary: %lld -> Decimal: %d", bin, convertBinaryToDecimal(bin));
    printf("\nDecimal: %d -> Binary: %lld", dec, convertDecimalToBinary(dec));

    return 0;
}