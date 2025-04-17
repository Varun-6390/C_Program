// Decimal to Binary converter

#include <stdio.h>

void decimal_to_binary(int decimal)
{
    if (decimal == 0)
    {
        printf("0\n");
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0)
    {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main()
{
    int decimal;
    printf("Enter a non-negative decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    decimal_to_binary(decimal);
    return 0;
}