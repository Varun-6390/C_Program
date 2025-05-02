// Merge two sorted array

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200], n1, n2, i, j, k;

    // Input size of first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    // Input first sorted array
    printf("Enter %d sorted elements:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    // Input second sorted array
    printf("Enter %d sorted elements:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    i = 0; // Index for arr1
    j = 0; // Index for arr2
    k = 0; // Index for merged array
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }

    // Output merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}