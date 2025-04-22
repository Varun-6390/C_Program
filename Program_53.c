// Progress bar simulator

#include <stdio.h>
#include <unistd.h>

int main()
{
    int progress = 0;
    const int total = 100;

    printf("Loading: [");
    fflush(stdout);

    while (progress <= total)
    {

        printf("=");
        fflush(stdout);

        usleep(100000);

        progress++;
    }

    printf("] Done!\n");
    return 0;
}