// Subtraction of two complex numbers

#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} Complex;

Complex subtractComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main()
{
    Complex num1, num2, difference;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    difference = subtractComplex(num1, num2);

    printf("Difference = %.2f + %.2fi\n", difference.real, difference.imag);

    return 0;
}