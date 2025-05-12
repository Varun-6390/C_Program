// Check if a number is Automorphic

// (Number whose square ends with the number itself)

#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    int digits = 0;
    while (temp)
    {
        digits++;
        temp /= 10;
    }

    int mod = pow(10, digits);

    if (square % mod == num)
        printf("Automorphic Number\n");
    else
        printf("Not Automorphic\n");

    return 0;
}