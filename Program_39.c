// Array of struct in C

#include <stdio.h>
typedef struct
{
    char name[25];
    float gpa;
} Students;
int main()
{
    Students student1 = {"Spongebob", 3.0};
    Students student2 = {"Pattrick", 2.5};
    Students student3 = {"Sandy", 4.0};
    Students student4 = {"Squidward", 1.7};
    Students students[] = {student1, student2, student3, student4};
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
    return 0;
}