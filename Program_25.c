// Greatest Common Divisor(GCD)

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("The GCD is: %d\n", num1);

    return 0;
}