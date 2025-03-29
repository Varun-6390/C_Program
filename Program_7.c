// Greatest among three

#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter first number : ");
    scanf("%d", &b);
    printf("\nEnter first number : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is Greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is Greatest", b);
    }
    else
    {
        printf("%d is Greatest", c);
    }
}