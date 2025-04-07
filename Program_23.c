// Loan Payment Estimator

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, annual_rate, monthly_rate, payment;
    int months;

    printf("Enter loan amount (principal): ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (%%): ");
    scanf("%f", &annual_rate);
    printf("Enter loan term (in months): ");
    scanf("%d", &months);

    if (principal <= 0 || annual_rate < 0 || months <= 0)
    {
        printf("Invalid input! Use positive values.\n");
        return 1;
    }

    monthly_rate = annual_rate / 100 / 12;
    payment = principal * monthly_rate * pow(1 + monthly_rate, months) /
              (pow(1 + monthly_rate, months) - 1);

    printf("Estimated monthly payment: %.2f\n", payment);
    return 0;
}