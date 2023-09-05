#include <stdio.h>
#include <string.h>
union Car
{
    int i_value;
    float f_value;
    char str[20];
};

int main()
{
    union Car car1, *car;    // pointers can be used to unions
    car = &car1;

    printf("Memory occupied by car1: %zu bytes\n", sizeof(car1));  // 20 bytes
    printf("Memory occupied by *car: %zu bytes\n", sizeof(car)); // 8 bytes because it is a pointer

    printf("\nint size: %zu bytes\n", sizeof(int));
    printf("float size: %zu bytes\n", sizeof(float));
    printf("char size: %zu bytes\n", sizeof(char));

    car1.i_value = 10;
    car1.f_value = 20.0;
    strcpy(car->str, "Hello");  // i_value and f_value now are junk

    printf("\ncar1.i_value = %d\n", car1.i_value);
    printf("car1.f_value = %.1f\n", car1.f_value);
    printf("*car.str = %s\n", car->str);

    car1.i_value = 10;
    printf("\ncar1.i_value = %d\n", car1.i_value);

    car1.f_value = 20.0;
    printf("car1.f_value = %.1f\n", car1.f_value);

    strcpy(car->str, "Hello");
    printf("*car.str = %s\n", car->str);

    return 0;
}