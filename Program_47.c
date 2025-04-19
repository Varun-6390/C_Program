// Prime number generator

#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int limit;

    printf("Enter upper limit: ");
    scanf("%d", &limit);

    if (limit < 2)
    {
        printf("No primes found\n");
        return 0;
    }

    printf("Prime numbers up to %d: ", limit);
    for (int i = 2; i <= limit; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}