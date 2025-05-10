// Convert Decimal to Binary using Stack

#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

int stack[SIZE], top = -1;

void push(int bit)
{
    stack[++top] = bit;
}

void display()
{
    printf("Binary representation: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}

void decimalToBinary(int num)
{
    while (num > 0)
    {
        push(num % 2);
        num /= 2;
    }
    display();
}

int main()
{
    int num;
    printf("Enter number in decimal: ");
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}