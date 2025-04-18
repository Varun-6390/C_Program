// Random Password Generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$";
    int i, len = 8;

    srand(time(NULL));

    printf("Generated password: ");
    for (i = 0; i < len; i++)
    {
        printf("%c", charset[rand() % (sizeof(charset) - 1)]);
    }
    printf("\n");

    return 0;
}