// Binary search

#include <stdio.h>
void main()
{
    int arr[100], n, i, low, high, mid, s, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order-\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to be  search: ");
    scanf("%d", &s);

    low = 0;
    high = n - 1;
    mid = (high + low) / 2;

    while (low != high)
    {

        if (s == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (s < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (high + low) / 2;
    }
    if (flag)
    {
        printf("Element found at %d position", mid + 1);
    }
    else
    {
        printf("Not found!");
    }
}
