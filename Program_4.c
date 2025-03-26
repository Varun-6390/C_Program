// Check Prime Number

#include <stdio.h>
void main()
{
    int n, i, flag = 0;

    // Input from user

    printf("Enter Number : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}