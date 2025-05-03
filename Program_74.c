// Digital Clock

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t now;
    struct tm *time_info;

    while (1)
    {
        time(&now);
        time_info = localtime(&now);

        printf("\r%02d:%02d:%02d",
               time_info->tm_hour,
               time_info->tm_min,
               time_info->tm_sec);

        fflush(stdout); // Ensure output is displayed immediately
        sleep(1);       // Wait for 1 second
    }

    return 0;
}