// Swap value of two variables in C

#include <stdio.h>
int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;
    printf("Before Swapping\n\n");
    printf("x: %c\n", x);
    printf("y: %c\n", y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter Swapping\n\n");
    printf("x: %c\n", x);
    printf("y: %c\n", y);
    return 0;
}