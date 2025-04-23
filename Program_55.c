// Nearest Power of 2

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lower = pow(2, (int)log2(num));
    int upper = pow(2, (int)log2(num) + 1);

    if (num - lower < upper - num)
        printf("Nearest power of 2: %d\n", lower);
    else
        printf("Nearest power of 2: %d\n", upper);

    return 0;
}