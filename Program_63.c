// Time Calculator

#include <stdio.h>

int main()
{
    float distance, speed, time;

    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    printf("Enter speed (in km/h): ");
    scanf("%f", &speed);

    if (speed == 0)
    {
        printf("Speed cannot be zero.\n");
        return 1;
    }

    time = distance / speed;

    printf("Time required = %.2f hours\n", time);

    return 0;
}