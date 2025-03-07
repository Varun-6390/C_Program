// Sorting of an Array in C

#include <stdio.h>
void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    printArray(arr, size);
    return 0;
}