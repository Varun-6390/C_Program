// Nested Loop in C

#include <stdio.h>
int main()
{
    int rows, columns;
    char symbol;
    printf("Enter Symbol: ");
    scanf("%c", &symbol);
    printf("Enter # of Rows: ");
    scanf("%d", &rows);
    printf("Enter # of Columns: ");
    scanf("%d", &columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}