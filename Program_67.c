// Ohm's law

#include <stdio.h>
void main()
{
    float V, I, R;
    printf("Enter the value of curent: ");
    scanf("%f", &I);

    printf("\nEnter the value of resistance: ");
    scanf("%f", &R);

    V = I * R; // ohm's law

    printf("\nValue of voltage is: %.2f volt", V);
}