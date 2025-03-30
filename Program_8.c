// Factorial using recursion

#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int x;
void main()
{
    printf("Enter Number : ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("\nFactorial of %d is %d", x, fact(x));
    }
    else
    {
        printf("Invalid input");
    }
}