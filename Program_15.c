// Temperature conversion program in C

#include <stdio.h>
#include <ctype.h>
int main()
{
    char unit;
    float temp;
    printf("Is the current temperature in (C) or (F): ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if (unit == 'C')
    {
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farenhite: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter Temperature in Farenhite: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius: %.1f", temp);
    }
    else
    {
        printf("\n%c is not valid unit of measurement", unit);
    }
    return 0;
}