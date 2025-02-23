// C Program to calculate Area and Circumfrence of Circle

#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    double radius;
    double circumfrence;
    double area;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    circumfrence = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\nCircumfrence: %lf", circumfrence);
    printf("\nArea: %lf", area);
    return 0;
}