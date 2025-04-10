// Linear search in array

#include <stdio.h>
void main()
{
    int arr[100], n, s, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter item to be search: ");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
        if (s == arr[i])
        {
            printf("Element is found at location %d", i + 1);
        }
    }
}