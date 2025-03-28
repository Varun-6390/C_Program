// Armstrong number

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits

    while (originalNum != 0)
    {
        originalNum = originalNum / 10;
        n++;
    }

    originalNum = num;

    // Compute the sum of powers of digits

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);
        originalNum = originalNum / 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}