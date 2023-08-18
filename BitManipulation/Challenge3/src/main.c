#include <stdio.h>
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


int main() {
    int num, position, newNum, bitStatus;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Number in binary: %lld\n", convertDecimalToBinary(num));

    /* Input bit position you want to set to 1 */
    printf("Enter nth bit to check and set to 1 (0-31): ");
    scanf("%d", &position);
    printf("You want to check the %d bit", position);
    printf("\nIn binary: %lld\n", convertDecimalToBinary(position));


    /* Right shift num, position times and perform bitwise AND with 1 */
    printf("Right shifting %d times the number and performing bitwise AND with 00000001", position);
    bitStatus = (num >> position) & 1;
    printf("\nThe %d bit is set to %d", position, bitStatus);
    printf("\nBitStatus in binary: %lld", convertDecimalToBinary(bitStatus));


    /* Left shift 1, n times and perform bitwise OR with num */
    printf("\nLeft shifting 1 time and performing OR with number");
    newNum = (1 << position) | num;
    printf("\nBit set successfully.");
    printf("\nNew number in binary: %lld\n", convertDecimalToBinary(newNum));

    printf("Number before setting %d bit: %d (in decimal)\n", position, num);
    printf("Number after setting %d bit: %d (in decimal)\n", position, newNum);

    return 0;
}