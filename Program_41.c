// Random Numbers in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number1 = (rand() % 6) + 1; // Random Number between 1 to 6
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d", number3);
    return 0;
}