// Augmented Assignment Operator in C

#include <stdio.h>
int main()
{
    int x = 10;
    x += 2; // x=x+2
    printf("%d\n", x);
    x -= 3; // x=x-3
    printf("%d\n", x);
    x *= 2; // x=x*2
    printf("%d\n", x);
    x /= 5; // x=x/5
    printf("%d\n", x);
    x %= 2; // x=x%2
    printf("%d", x);
    return 0;
}