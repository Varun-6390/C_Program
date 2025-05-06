// Delete an element by its value in array

#include <stdio.h>

void deleteElement(int arr[], int *size, int value)
{
    int i, pos = -1;

    // Find the position of the element to delete
    for (i = 0; i < *size; i++)
    {
        if (arr[i] == value)
        {
            pos = i;
            break;
        }
    }

    // If element is found, shift elements to the left
    if (pos != -1)
    {
        for (i = pos; i < *size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element %d deleted successfully.\n", value);
    }
    else
    {
        printf("Element not found in the array.\n");
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    printf("Enter the element to delete: ");
    scanf("%d", &value);

    deleteElement(arr, &size, value);

    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}