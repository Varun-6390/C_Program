// OR operator in C

#include <stdio.h>
#include <stdbool.h>
int main()
{
    float temp = 25;
    bool sunny = true;
    if (temp <= 0 || temp >= 30 || sunny)
    {
        printf("The weather is bad!");
    }
    else
    {
        printf("The weather is good!");
    }
    return 0;
}