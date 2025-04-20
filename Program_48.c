// Area Converter

#include <stdio.h>
#include <math.h>

void acreToSquarefeet(double acre)
{
    double r = (acre * 43560);
    printf("%.2lf", r);
}

void SquarefeetToacre(double Squarefeet)
{
    double r = (Squarefeet / 43560);
    printf("%.2lf", r);
}
void main()
{
    int choice;
    double area;

    printf("-Area Converter-\n");
    printf("Select converter:\n");
    printf("1 for acreToSquarefeet\n2 for SquarefeetToacre\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter area in acre:");
        scanf("%lf", &area);
        printf("Area in Squarefeet: ");
        acreToSquarefeet(area);
        break;

    case 2:
        printf("Enter area in squarefeet:");
        scanf("%lf", &area);
        printf("Area in Squarefeet: ");
        SquarefeetToacre(area);
        break;

    default:
        printf("Invalid input! Select 1 or 2");
        break;
    }
}