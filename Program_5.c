// Fibonacci Series

#include <stdio.h>
int fibo(int n);
void main()

// Function to print fibonacci series upto n terms
{
    int x;
    printf("Enter the number of terms : ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", fibo(i));
    }
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
