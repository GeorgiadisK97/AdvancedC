#include <stdio.h>

int count = 10;

extern void write_extern();
// void write_extern(); It's the same with above. Extern can be excluded.

int main()
{
    write_extern();
    return 0;
}