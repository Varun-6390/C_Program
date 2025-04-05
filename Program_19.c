// CTC Calculator

#include <stdio.h>

int main()
{
    float basic, hra, da, ta, pf, bonus, gross, ctc;

    printf("Enter your basic salary: ");
    scanf("%f", &basic);

    printf("Enter bonus (if any, else 0): ");
    scanf("%f", &bonus);

    hra = 0.40 * basic;
    da = 0.10 * basic;
    ta = 1600;
    pf = 0.12 * basic;

    gross = basic + hra + da + ta + bonus;
    ctc = gross + pf;

    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary     : %.2f\n", basic);
    printf("HRA (40%%)        : %.2f\n", hra);
    printf("DA (10%%)         : %.2f\n", da);
    printf("TA (fixed)       : %.2f\n", ta);
    printf("Bonus            : %.2f\n", bonus);
    printf("PF (12%%)         : %.2f\n", pf);
    printf("Gross Salary     : %.2f\n", gross);
    printf("CTC (incl. PF)   : %.2f\n", ctc);

    return 0;
}