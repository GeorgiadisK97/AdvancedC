#include <stdio.h>

int convertDecimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;

    while (n != 0)
    {
        remainder = n % 2;
        n = n / 2;
        binaryNumber += remainder * i;
        i = i * 10;
    }

    return binaryNumber;
}
void NOT(int input)
{
    printf("The result of applying the '~' operator on number %d (%d) is: %d\n"
        , input, convertDecimalToBinary(input), convertDecimalToBinary(~(input)));
}

void AND(int input1, int input2)
{
    printf("The result of applying the `&` operator on number %d (%d) and number %d (%d) is: %d\n"
        , input1, convertDecimalToBinary(input1), input2, convertDecimalToBinary(input2), convertDecimalToBinary(input1 & input2));
}

void OR(int input1, int input2)
{
    printf("The result of applying the `|` operator on number %d (%d) and number %d (%d) is: %d\n"
        , input1, convertDecimalToBinary(input1), input2, convertDecimalToBinary(input2), convertDecimalToBinary(input1 | input2));
}

void XOR(int input1, int input2)
{
    printf("The result of applying the `^` operator on number %d (%d) and number %d (%d) is: %d\n"
        , input1, convertDecimalToBinary(input1), input2, convertDecimalToBinary(input2), convertDecimalToBinary(input1 ^ input2));
}

void LSHIFT(int input, int n)
{
    printf("The result of applying the `<<` operator on number %d (%d) by %d places is number(%d): %d\n"
        , input, convertDecimalToBinary(input), n, convertDecimalToBinary(input << n), input << n);
}



int main(void)
{
    int input1 = 0, input2 = 0;
    printf("Enter an integer: ");
    scanf("%d", &input1);
    printf("Enter another integer: ");
    scanf("%d", &input2);
    NOT(input1);
    NOT(input2);
    AND(input1, input2);
    OR(input1, input2);
    XOR(input1, input2);
    LSHIFT(input1, 2);

    return 0;
}