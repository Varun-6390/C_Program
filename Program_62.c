// Transpose of a matrix

#include <stdio.h>
void main()
{
    int matrix[100][100], transpose[100][100], n, row, col, i, j;

    printf("Enter the of number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of column: ");
    scanf("%d", &col);

    printf("Enter elements of matrix -\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix -\n\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("\n");
    printf("Transpose matrix -\n\n");

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
}