// Queue-Based Printer Job Simulator

#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct
{
    char docName[50];
} Document;

typedef struct
{
    Document docs[SIZE];
    int front, rear;
} Queue;

void initQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int isEmpty(Queue *q) { return q->front == -1 || q->front > q->rear; }
int isFull(Queue *q) { return q->rear == SIZE - 1; }

void enqueue(Queue *q, char docName[])
{
    if (isFull(q))
    {
        printf("Printer queue full!\n");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->rear++;
    strcpy(q->docs[q->rear].docName, docName);
    printf("Added document: %s\n", docName);
}

void dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("No documents to print!\n");
        return;
    }
    printf("Printing: %s\n", q->docs[q->front].docName);
    q->front++;
}

void displayQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Printer queue is empty!\n");
        return;
    }
    printf("Documents in queue: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("[%s] ", q->docs[i].docName);
    }
    printf("\n");
}

int main()
{
    Queue q;
    initQueue(&q);

    enqueue(&q, "Report.pdf");
    enqueue(&q, "Invoice.doc");
    enqueue(&q, "Presentation.ppt");

    displayQueue(&q);
    dequeue(&q);
    displayQueue(&q);

    return 0;
}