// Finding Duplicate in array

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}