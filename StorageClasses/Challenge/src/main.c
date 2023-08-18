#include <stdio.h>

/*<---------- First Challenge ---------->*/

// static double a;
// extern double b;

// static void print();

// int main()
// {
//     static float y;
//     register int r;
//     {
//         int x = 10;
//     }
//     return 0;
// }


/*<---------- Second Challenge ---------->*/

// int add(int number)
// {
//     static int sum = 0;     //Initialized once.
//     sum += number;
//     return sum;
// }

// int main()
// {
//     printf("Sum: %d\n", add(25));
//     printf("Sum: %d\n", add(15));
//     printf("Sum: %d\n", add(30));
//     return 0;
// }


/*<---------- Third Challenge ---------->*/

int counter = 5;

extern void print();

int main()
{
    for (int i = 0; i < counter; i++)
    {
        print();
    }
    return 0;
}