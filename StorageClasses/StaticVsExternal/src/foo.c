#include <stdio.h>

extern int func();

void func2(){
    func();
}

// Compiler Error: undefined reference to `func'. Because func is static in main. Doesn't matter if it's extern here.