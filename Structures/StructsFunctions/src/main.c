#include <stdio.h>
#include <stdbool.h>

struct family
{
    char name[20];
    int age;
};

bool is_equal(const struct family *member1, const struct family *member2)
{
    if(member1->age == member2->age)
        return true;
    return false;
}

void main()
{
    struct family mother = {.name = "Zoi", .age = 62};
    struct family father = {.name = "Ioannis", .age = 63};
    struct family kid = {.name = "Xristina", .age = 27};


    struct family *const ptr1 = &mother;
    struct family *ptr2 = &father;

    ptr1->age = 10; 

    if(is_equal(ptr1, ptr2))
        printf("Your mother and your father are the same age");
    else
        printf("Your mother and your father are not the same age");
}