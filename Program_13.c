// Swapping two numbers using third variable

#include <stdio.h>
void main()
{
    int x, y, temp;

    printf("Enter First number: ");
    scanf("%d", &x);

    printf("\nEnter Second number: ");
    scanf("%d", &y);

    printf("Before swapping\n a = %d, b = %d", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping\n a = %d, b = %d", x, y);
}