// Speed converter

#include <stdio.h>
void main()
{
    int choice, flag = 0;
    float value, result;

    printf("Speed Converter\n");
    printf("1. m/s to km/h\n2. km/h to m/s\n");
    printf("Enter choice (1-2): ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice)
    {
    case 1:
        result = value * 3.6;
        flag = 1;
        break;

    case 2:
        result = value / 3.6;
        flag = 1;
        break;

    default:
        printf("Invalid input");
        break;
    }

    if (flag == 1)
    {
        printf("Converted value: %.4f", result);
    }
}