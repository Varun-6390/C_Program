// Parentheses Matching using Stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch)
{
    if (top == SIZE - 1)
        return;
    stack[++top] = ch;
}

char pop()
{
    return (top == -1) ? '\0' : stack[top--];
}

int isBalanced(char *expr)
{
    for (int i = 0; i < strlen(expr); i++)
    {
        if (expr[i] == '(')
        {
            push('(');
        }
        else if (expr[i] == ')')
        {
            if (pop() != '(')
                return 0;
        }
    }
    return top == -1;
}

int main()
{
    char expr[] = "(a+b)*(c+d)";
    printf("Expression is %s\n", isBalanced(expr) ? "Balanced" : "Unbalanced");
    return 0;
}