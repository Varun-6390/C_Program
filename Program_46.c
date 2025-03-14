// Pointers in C

#include <stdio.h>
void printAge(int *);
int main()
{
    int age = 21;
    int *pAge = &age;
    printf("Address of Age : %p\n", &age);
    printf("Value of pAge : %p\n", pAge);
    printf("Size of Age : %d bytes\n", sizeof(age));
    printf("Size of pAge : %d bytes\n", sizeof(pAge));
    printf("Value of Age : %d\n", age);
    printf("Value stored at %p address : %d\n", pAge, *pAge);
    printAge(pAge);
    return 0;
}
void printAge(int *pAge)
{
    printf("Age : %d", *pAge);
}