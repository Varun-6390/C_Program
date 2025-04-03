// Countdown Timer

#include <stdio.h>
#include <time.h>
int main()
{
    int seconds;
    printf("Enter countdown in seconds: ");
    scanf("%d", &seconds);

    time_t start = time(NULL);
    while (seconds >= 0)
    {
        time_t now = time(NULL);
        int remaining = seconds - (int)(now - start);
        if (remaining < 0)
            remaining = 0;

        printf("\rTime remaining: %d seconds", remaining);
        fflush(stdout);

        if (remaining == 0)
            break;
    }
    printf("\nTime's up!!!\n");
    return 0;
}