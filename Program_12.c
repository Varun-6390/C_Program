// C Program to calculate Hypotenuse of right angle triangle

#include <stdio.h>
#include <math.h>
int main()
{
    double A;
    double B;
    double C;
    printf("Enter Side A: ");
    scanf("%lf", &A);
    printf("Enter Side B: ");
    scanf("%lf", &B);
    C = sqrt(A * A + B * B);
    printf("\nHypotenuse: %lf", C);
    return 0;
}