// Celsius to fahrenheit

#include <stdio.h>
int main()
{
    float c, F;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    F = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", F);
    return 0;
}
