// Selection sort

#include <stdio.h>
void selection_sort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j <= n; j++)
            if (arr[j] < arr[min])
            {
                min = j;
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
    }
}

int main()
{
    int array[100], n, i;
    printf("enter size of array : ");
    scanf("%d", &n);
    printf("enter elemnts of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    selection_sort(array, n);
    printf("sorted array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
