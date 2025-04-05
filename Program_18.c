// BMI Calculator

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("\nEnter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f", bmi);

    if (bmi < 18.5)
    {
        printf("\nCategory: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("\nCategory: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("\nCategory: Overweight\n");
    }
    else
    {
        printf("\nCategory: obese\n");
    }
    return 0;
}