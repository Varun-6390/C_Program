// Sum of elements in array

#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}