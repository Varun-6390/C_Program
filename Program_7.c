// Arithmetic Operators in C

#include <stdio.h>
int main()
{
    // + (Addition)
    // - (Subtraction)
    // * (Multiplication)
    // / (Division)
    // % (Modulus)
    // ++ (Increment)
    // -- (Decrement)
    int x = 5;
    int y = 2;
    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    int div1 = x / y;
    float div2 = x / (float)y;
    int rem = x % y;
    x++;
    y++;
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", div1);
    printf("%f\n", div2);
    printf("%d\n", rem);
    printf("%d\n", x);
    printf("%d", y);
    return 0;
}