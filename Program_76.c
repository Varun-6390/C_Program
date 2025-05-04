// Check Strong number

// A Strong Number is a number for which the sum of the factorials of its digits is equal to the number itself.

// Example:
// 145 is a Strong Number because:
// 1! + 4! + 5! = 1 + 24 + 120 = 145

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}