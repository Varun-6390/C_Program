// Simple Calculator

#include <stdio.h>
void main()
{
    char opr;
    double s1, s2, result;

    // Display menu

    printf("Choose an Operator : +, -, *, / \n");
    scanf("%c", &opr);

    // Take Input From User

    printf("Enter First Number : ");
    scanf("%lf", &s1);
    printf("\nEnter Second Number : ");
    scanf("%lf", &s2);

    // Switch Cases for differnt operations

    switch (opr)
    {
    case '+':
        result = s1 + s2;
        printf("\nResult : %lf", result);
        break;

    case '-':
        result = s1 - s2;
        printf("\nResult : %lf", result);
        break;

    case '*':
        result = s1 * s2;
        printf("\nResult : %lf", result);
        break;

    case '/':
        if (s2 != 0)
        {
            result = s1 / s2;
            printf("\nResult : %lf", result);
        }
        else
        {
            printf("Cannot Divide by zero");
        }
        break;

    default:
        printf("Invalid input");
        break;
    }
}
