#include <stdio.h>
#include <complex.h>

int main()
{
    #ifdef __STDC_NO_COMPLEX__
        printf("Complex arithmetic is not supported.\n");
        exit(1);
    #else
        printf("Complex arithmetic is supported.\n");
    #endif // __STDC_NO_COMPLEX__

    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    double complex sum = 0;
    double complex diff = 0;

    printf("Working with complex numbers\n");
    printf("Starting values: cx = %.1f% + .1fi\n\t\t cy = %.1f% + .1fi", creal(cx), cimag(cx), creal(cy), cimag(cy));

    sum = cx + cy;
    printf("\ncx + cy = %.0f% + .0fi", creal(sum), cimag(sum));

    diff = cx - cy;
    printf("\ncx - cy = %.0f% + .0fi", creal(diff), cimag(diff));
    
    return 0;
}