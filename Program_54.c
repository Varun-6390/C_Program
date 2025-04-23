// Check Duck number
// Duck number : a number that contains atleast one zero but not at beginning

#include <stdio.h>

int main()
{
    int num, rem, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        if (rem == 0)
            flag = 1;
        temp /= 10;
    }

    if (num % 10 == 0)
        printf("Not a Duck Number.\n");
    else if (flag)
        printf("Duck Number.\n");
    else
        printf("Not a Duck Number.\n");

    return 0;
}