// Tower of hanoi

#include <stdio.h>

void toh(int, char, char, char);

void main()
{
    int n;
    printf("enter Number of Disks : ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
}
void toh(int n, char x, char y, char z)
{
    if (n > 0)
    {
        toh(n - 1, x, z, y);
        printf("\n Move from %c to %c", x, z);
        toh(n - 1, y, x, z);
    }
}
