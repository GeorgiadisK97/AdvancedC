#include <stdio.h>
#include <limits.h>

// #define NDEBUG  // Turns off all assertion macros. Has to be defined before the #include directive of assert.h
                // #undefine NDEBUG to turn on assertion macros.
#include <assert.h>

static_assert(CHAR_BIT == 8, "16-bit char falsely assumed");

int main()
{
  int y = 6;
  for(int i = 0; i < 20; ++i)
  {
    printf("y: %d i: %d\n", y, i);
    assert(i < y);
  }

  return 0;
}