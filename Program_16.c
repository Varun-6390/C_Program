// Calculator program in C

#include <stdio.h>
int main()
{
    char operator;
    double num1, num2, result;
    printf("Enter Operation (+ - * /): ");
    scanf("%c", &operator);
    printf("Enter First Number: ");
    scanf("%lf", &num1);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nResult: %.2lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nResult: %.2lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nResult: %.2lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nResult: %.2lf", result);
        break;
    default:
        printf("\n%c is not a valid Operation", operator);
    }
    return 0;
}