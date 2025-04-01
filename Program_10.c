// Length Converter

#include <stdio.h>
void convertLen(float value, int from, int to)
{
    int flag = 0;
    float meter;
    switch (from)
    {
    case 1:
        meter = value; // meter
        break;
    case 2:
        meter = value * 1000; // km to meter
        break;
    case 3:
        meter = value / 100; // cm to meter
        break;
    case 4:
        meter = value * 0.0254; // inches to meter
        break;
    case 5:
        meter = value * 0.3048; // feet to meter
        break;
    default:
        printf("Invalid input\n");
    }

    float result;

    //  convert meter to desired unit

    switch (to)
    {
    case 1:
        result = meter; // meter
        flag = 1;
        break;
    case 2:
        result = meter / 1000; // to km
        flag = 1;
        break;
    case 3:
        result = meter * 100; // to cm
        flag = 1;
        break;
    case 4:
        result = meter / 0.0254; // to inches
        flag = 1;
        break;
    case 5:
        result = meter / 0.3048; // to feet
        flag = 1;
        break;
    default:
        printf("Invalid input\n");
    }

    if (flag == 1)
    {
        printf("Converted Value: %.4f\n", result);
    }
    else
    {
        printf("Choose correct unit");
    }
}

int main()
{
    float value;
    int from, to;

    printf("Length Converter\n");
    printf("1. Meters\n2. Kilometers\n3. Centimeters\n4. Inches\n5. Feet\n");

    printf("Enter the value to convert: ");
    scanf("%f", &value);

    printf("Select the input unit (1-5): ");
    scanf("%d", &from);

    printf("Select the output unit (1-5): ");
    scanf("%d", &to);

    convertLen(value, from, to);

    return 0;
}