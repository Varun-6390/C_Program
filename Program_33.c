// 2D Array in C

#include <stdio.h>
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int columns = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}