// Left shift elements in array

#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store first element
    temp = arr[0];

    // Shift elements to left
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Assign first element to the last position
    arr[n - 1] = temp;

    // Output result
    printf("Array after left shift: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}