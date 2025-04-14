// Area of right angle triangle

#include <stdio.h>
void main()
{
    float base, height, area;

    printf("Enter length of base:  ");
    scanf("%f", &base);

    printf("\nEnter length of Height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of triangle is: %.2f", area);
}