// switch statement in C

#include <stdio.h>
int main()
{
    char grade;
    printf("Enter letter grade: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did okay!");
        break;
    case 'D':
        printf("At least it's not an F!");
        break;
    case 'F':
        printf("You Failed!");
        break;
    default:
        printf("Please enter only valid grades");
    }
    return 0;
}