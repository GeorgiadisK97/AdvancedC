#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definition of atoi()
// int atoi(const char *s)
// Parameter: a pointer to a constant char.
// Converts the characters passed to ints and returns it.
// The parameter has to be only numbers, if it contains whitespaces or letters or weird characters
// it will stop and return the int.


// Same for atof() but instead it returns a double.
// Same for atol() but instead it returns a long.

// Definiton of strtod()
// double strtod(const char *str, char **end)
// Parameter1: Pointer to a constant string, which string we want to convert.
// Parameter2: Double pointer. Contains a pointer to the character after the last character used in conversion. 


int main()
{
    char a[10] = "100";         // it will return 100
    // char a[10] = "10a0";     // it will return 10. Reads the 'a', stops and returns.
    int value = atoi(a);
    printf("%d\n", value);

    char b[10] = "3.14";
    double fvalue = atof(b);
    printf("%f\n", fvalue);

    char c[] = "100000000000000";
    long lvalue = atol(c);
    printf("%ld\n", lvalue);


    /*For strtod (same for stdtof and strtol. Note: strtol takes a 3rd parameter which is the base (10).) */
    char str[] = {"505377 30483 34636"};
    char *end = NULL;

    double dvalue = strtod(str, &end);
    if(str == end)
        printf("Invalid input\n");
    double d1value = strtod(end, &end);
    double d2value = strtod(end, NULL);

    printf("%.lf:%.lf:%.lf\n", dvalue, d1value, d2value);

    // Random Numbers

    srand(time(0));
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n", rand() % 8 + 2); // prints random numbers from 2 to 9.
                                        // rand % (B - A + 1) + A
                                        // A: lower limit
                                        // B: upper limit
                                        // (B - A + 1 ) + A = number of possible outcomes
                                        // Example: Generate random numbers between 2 and 9
                                        // A:2, B:9 -> (B - A + 1) + A = (9 - 2 + 1) + 2 = 8 + 2
                                        // rand() % 8 + 2;
    }
    return 0;
}