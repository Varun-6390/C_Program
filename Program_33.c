// Area of triangle using Heron's formula

#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, s, ar;

    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("\nEnter the length of side b: ");
    scanf("%f", &b);
    printf("\nEnter the length of side c: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;

    ar = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle is: %.2f", ar);
}