// Stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d\n", value);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    struct Node *temp = top;
    printf("Popped: %d\n", top->data);
    top = top->next;
    free(temp);
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    struct Node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    peek();
    return 0;
}