// Arguments in C

#include <stdio.h>
void birthday(char name[], int age)
{
    printf("Happy birthday dear %s!", name);
    printf("\nYou are %d years old", age);
}
int main()
{
    char name[] = "Bro";
    int age = 21;
    birthday(name, age);
    return 0;
}