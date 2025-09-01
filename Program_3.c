// Checking Even or Odd

#include <stdio.h>
void main()
{
    int num;

    // Input From the User

    printf("Enter a number : ");
    scanf("%d", &num);

    // Checking Number

    if (num % 2 == 0)
    {
        printf("Number is  even.");
    }
    else
    {
        printf("Number is odd.");
    }
}

