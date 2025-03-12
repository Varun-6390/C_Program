// Bitwise Operator in C

#include <stdio.h>
int main()
{
    int x = 6;  // 6 = 000000110
    int y = 12; // 12 = 000001100
    int z = 0;  // 0 = 000000000
    z = x & y;  // 000000110 & 000001100 = 00000100
    printf("AND : %d\n", z);
    z = x | y; // 000000110 | 000001100 = 00001110
    printf("OR : %d\n", z);
    z = x ^ y; // 000000110 ^ 000001100 = 00001010
    printf("XOR : %d\n", z);
    z = x << 2; // 000000110 << 2 = 000011000
    printf("LEFT SHIFT : %d\n", z);
    z = x >> 2; // 000000110 >> 2 = 000000001
    printf("RIGHT SHIFT : %d\n", z);
    return 0;
}