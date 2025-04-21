// Rock Paper Scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice()
{
    return rand() % 3;
}

const char *choiceToString(int choice)
{
    if (choice == 0)
        return "Rock";
    if (choice == 1)
        return "Paper";
    return "Scissors";
}

void decideWinner(int player, int computer)
{
    if (player == computer)
    {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 2) ||
             (player == 1 && computer == 0) ||
             (player == 2 && computer == 1))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}

int main()
{
    int playerChoice, computerChoice;
    char playAgain;

    srand(time(NULL));

    do
    {
        printf("\n--- Rock, Paper, Scissors ---\n");
        printf("0: Rock\n1: Paper\n2: Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &playerChoice);

        if (playerChoice < 0 || playerChoice > 2)
        {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        computerChoice = getComputerChoice();

        printf("You chose: %s\n", choiceToString(playerChoice));
        printf("Computer chose: %s\n", choiceToString(computerChoice));

        decideWinner(playerChoice, computerChoice);

        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}