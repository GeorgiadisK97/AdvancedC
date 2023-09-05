#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

noreturn void func()
{
    abort();
}

int main()
{
    return 0;
}