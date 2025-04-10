// Buzz number

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 10 == 7 || n % 7 == 0)
    {
        printf(" %d is a buzz number", n);
    }
    else
    {
        printf(" %d is not a buzz number", n);
    }
}