// Merge two sorted linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->next = NULL;
    return n;
}

struct Node *merge(struct Node *a, struct Node *b)
{
    if (!a)
        return b;
    if (!b)
        return a;

    if (a->data < b->data)
    {
        a->next = merge(a->next, b);
        return a;
    }
    else
    {
        b->next = merge(a, b->next);
        return b;
    }
}

void printList(struct Node *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *list1 = createNode(1);
    list1->next = createNode(3);
    list1->next->next = createNode(5);

    struct Node *list2 = createNode(2);
    list2->next = createNode(4);
    list2->next->next = createNode(6);

    struct Node *merged = merge(list1, list2);

    printf("Merged List: ");
    printList(merged);

    return 0;
}