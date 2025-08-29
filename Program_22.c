// Bill Splitter

#include <stdio.h>

int main()
{
    float total;
    int num_persn;

    printf("Enter the total bill amount: ");
    scanf("%f", &total);
    printf("\nEnter the number of People: ");
    scanf("%d", &num_persn);

    if (num_persn > 0)
    {
        float per_persn = total / num_persn;
        printf("Each person should pay: %.2f", per_persn);
    }
    else
    {
        printf("Number of people must be greater than 0\n");
    }
}
