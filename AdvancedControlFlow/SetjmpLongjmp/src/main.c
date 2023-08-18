#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

jmp_buf buf;

void func()
{
    printf("in my function()\n");
    longjmp(buf, 1);
    printf("you will never see this because I longjmped");
}

int main()
{
    if (setjmp(buf))
        printf("Back in main\n");
    else
    {
        printf("First time through\n");
        func();
    }

    return 0;
}