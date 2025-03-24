// Quadratic Equation Root Finder

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2;
    printf("Enter the value of Coefficient -\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("\nb = ");
    scanf("%lf", &b);
    printf("\nc = ");
    scanf("%lf", &c);

    // calculating discriminent
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct \n x = %lf \n y = %lf", r1, r2);
    }

    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and repeated \n x = %lf", r1);
    }
    else
    {
        printf("Roots are imaginary");
    }
}
