// break and continue statement in C

#include <stdio.h>
int main()
{
    // It will print numbers 1 to 10 except 6
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("\n");
    // This will print number 1 to 5
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}