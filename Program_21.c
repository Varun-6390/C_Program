// Area and Perimeter of Circle

#include <stdio.h>

int main()
{
    float r, ar, p;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    ar = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area of circle is: %.2f", ar);
    printf("\nPerimeter of circle: %.2f", p);
    return 0;
}