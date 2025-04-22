// binary to decimal converter

#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(const char binary[])
{
    int decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, length - i - 1);
        }
        else if (binary[i] != '0')
        {
            printf("Invalid binary digit '%c' detected. Please enter only 0 or 1.\n", binary[i]);
            return -1;
        }
    }

    return decimal;
}

int main()
{
    char binary[65];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int result = binaryToDecimal(binary);
    if (result != -1)
    {
        printf("Decimal equivalent: %d\n", result);
    }

    return 0;
}