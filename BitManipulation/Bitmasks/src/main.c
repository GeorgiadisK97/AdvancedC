#include <stdio.h>



int main()
{
    unsigned char Test = 0x01;
    int flag1 = 15; // 0000 0000 0000 0000 0000 0000 0000 1111
    int flag2 = 15; // 0000 0000 0000 0000 0000 0000 0000 1111
    int flag3 = 15; // 0000 0000 0000 0000 0000 0000 0000 1111

    int MASK = 182; // 0000 0000 0000 0000 0000 0000 1011 0110

    flag1 = flag1 | MASK;    /* 0000 0000 0000 0000 0000 0000 0000 1111
                                0000 0000 0000 0000 0000 0000 1011 0110
                                ---------------------------------------
                                0000 0000 0000 0000 0000 0000 1011 1111 = 191 */
    printf("%d", flag1);

    flag2 = flag2 & ~(MASK); /* 0000 0000 0000 0000 0000 0000 0000 1111
                                1111 1111 1111 1111 1111 1111 0100 1001
                                ---------------------------------------
                                0000 0000 0000 0000 0000 0000 0000 1001 = 9 */
    printf("\n%d", flag2);

    flag3 = flag3 ^ MASK;    /* 0000 0000 0000 0000 0000 0000 0000 1111
                                0000 0000 0000 0000 0000 0000 1011 0110
                                ---------------------------------------
                                0000 0000 0000 0000 0000 0000 1011 1001 = 185 */
    printf("\n%d", flag3);
    printf("\n%d", sizeof(Test));

    return 0;
}