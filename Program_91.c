// Print First N Binary Numbers Using Queue

#include <stdio.h>
#include <string.h>

#define SIZE 20

void generateBinary(int n)
{
    char queue[SIZE][SIZE];
    int front = 0, rear = 0;
    strcpy(queue[rear++], "1");

    for (int i = 0; i < n; i++)
    {
        printf("%s ", queue[front]);
        char temp[SIZE];
        strcpy(temp, queue[front++]);
        strcpy(queue[rear++], strcat(temp, "0"));
        temp[strlen(temp) - 1] = '1';
        strcpy(queue[rear++], temp);
    }
    printf("\n");
}

int main()
{
    int n = 10;
    printf("First %d binary numbers:\n", n);
    generateBinary(n);
    return 0;
}