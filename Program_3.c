// Variables in C

#include <stdio.h>
int main()
{
    int a;               // Declaration
    a = 90;              // Initialization
    int b = 70;          // Declaration + Initialization
    int age = 21;        // Integer
    float gpa = 2.05;    // Floating Point
    char grade = 'C';    // Character
    char name[] = "Bro"; // Array of Character (String)
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f", gpa);
    return 0;
}