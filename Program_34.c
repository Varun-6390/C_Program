// Bubble sort

#include <stdio.h>
void main()
{
    int arr[100], n, i, j, temp = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}