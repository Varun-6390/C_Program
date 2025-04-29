// Data Converter

#include <stdio.h>

void conv(double data, int from, int to)
{
    double byte, result;
    int flag = 0;
    switch (from)
    {
    case 1:
        byte = data;
        break;

    case 2:
        byte = data * 1000;
        break;

    case 3:
        byte = data * 1000000;
        break;

    case 4:
        byte = data * 1000000000;
        break;

    default:
        printf("Invalid input!");
        break;
    }

    switch (to)
    {
    case 1:
        result = byte;
        flag = 1;
        break;

    case 2:
        result = byte / 1000;
        flag = 1;
        break;

    case 3:
        result = byte / 1000000;
        flag = 1;
        break;

    case 4:
        result = byte / 1000000000;
        flag = 1;
        break;

    default:
        printf("Invalid input!");
        break;
    }

    if (flag)
    {
        printf("Converted value: %.4lf", result);
    }
    else
    {
        printf("Invalid input");
    }
}
int main()
{
    int from, to;
    double value;
    printf("Data converter\n");
    printf("**************\n");
    printf("1.Byte\n2.Kilo Byte\n3.Mega Byte\n4.Giga Byte\n");
    printf("Choose input type(1-4): ");
    scanf("%d", &from);
    printf("Choose output type(1-4): ");
    scanf("%d", &to);
    printf("Enter data to be converted: ");
    scanf("%lf", &value);

    conv(value, from, to);
    return 0;
}
