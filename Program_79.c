// Right shift elements in array

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

    // Store last element
    temp = arr[n - 1];

    // Shift elements to the right
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Assign last element to the first position
    arr[0] = temp;

    // Output result
    printf("Array after right shift: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}