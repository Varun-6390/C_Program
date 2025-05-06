// Delete an element by its position in array

#include <stdio.h>

void deleteByPosition(int arr[], int *size, int position)
{
    if (position < 0 || position >= *size)
    {
        printf("Invalid position! Please enter a valid index.\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Reduce size of array
    printf("Element at position %d deleted successfully.\n", position);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int position;

    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &position);

    deleteByPosition(arr, &size, position);

    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}