#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define SIZE 10
static void display_array(const int ar[], int n);

typedef struct 
{
    char name[256];
    int age;
    double average;
} Student;

int main()
{
    /*========== system() - getenv() ==========*/
    // char *command = "ls -l";
    // system(command);

    // char *str = NULL;

    // assert((str = getenv("HOME")) != NULL);
    // printf("Path: %s\n", str);
    // assert((str = getenv("PATH")) != NULL);
    // printf("Path: %s\n", str);

    /*========== memcpy() - memmove() ==========*/

    int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int target[SIZE];
    double curious[SIZE / 2] = {2.0, 2.5, 2.10, 2.20, 5.30} ;
    puts("memcpy() used:");
    puts("values(original data): ");
    display_array(values, SIZE);
    memcpy(target, values, SIZE * sizeof(int));
    puts("target(copy of values): ");
    display_array(target, SIZE);

    puts("using memmove() with overlapping ranges: ");
    memmove(values + 2, values, 5 * sizeof(int));
    puts("values -- elements 0-5 copied to 2-7: ");
    display_array(values, SIZE);


    Student student1;
    strcpy(student1.name, "Sam");
    student1.age = 23;
    student1.average = 96.5;

    Student student2;

    memcpy(&student2, &student1, sizeof(Student));

    printf("   Student1 name: %s\n", student1.name);
    printf("    Student1 age: %d\n", student1.age);
    printf("Student1 average: %.1f\n", student1.average);

    printf("   Student2 name: %s\n", student1.name);
    printf("    Student2 age: %d\n", student1.age);
    printf("Student2 average: %.1f\n", student1.average);

    char *string = "Konstantinos";
    char *dest = NULL;
    dest = strdup(string);
    printf("%s\n", dest);       // Konstantinos
    dest = strndup(string, 5);  // Konst
    printf("%s\n", dest);

    return 0;
}

static void display_array(const int ar[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
