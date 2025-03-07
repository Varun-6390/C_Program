// Array of String in C

#include <stdio.h>
int main()
{
    char arr[][15] = {"BMW", "Audi", "Rolls Royce", "Volkswagen"};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}