// Iterating Array in C using Loop

#include <stdio.h>
int main()
{
    int arr[] = {5, 7, 3, 2, 6, 8};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}