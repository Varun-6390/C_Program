// Number Guessing Game in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 1, MAX = 100;
    int guess;
    int guesses = 0;
    int answer;
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    do
    {
        printf("Enter a Guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too High!\n");
        }
        else if (guess < answer)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != answer);
    printf("\n*********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("*********************");
    return 0;
}