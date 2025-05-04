// Check Perfect number

// A Perfect Number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
// Example: 6 is perfect because 1 + 2 + 3 = 6.

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and calculate sum
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check if sum equals the number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}