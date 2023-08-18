#include <stdio.h>

struct point
{
    int x, y, z;
};

void print(const struct point p)
{
    printf("\np.x = %d p.y = %d p.z = %d", p.x, p.y, p.z);
}


int main()
{
    int array[] = {1, 2, 3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50, [42] = 401};
    for (size_t i = 0; i < 100; ++i)
    {
        printf("%d", array[i]);
    }
    int n = sizeof(array) / sizeof(array[0]);
    printf("\nSize: %d", n);

    printf("\n-------------------------------");

    struct point p1 = {.x = 1, .y = 2, .z = 3};
    struct point p2 = {x : 4, y : 5, z : 6};
    struct point p3 = {7, 8, 9};

    print(p1);
    print(p2);
    print(p3);


    struct point struct_array[3] = {[0].x = 10, [0].y = 11, [0].z = 12, [1].x = 13, [1].y = 14, [1].z = 15, [2].x = 16, [2].y = 17, [2].z = 18};
    print(struct_array[0]);
    print(struct_array[1]);
    print(struct_array[2]);


    return 0;
}