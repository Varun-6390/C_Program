// Digital Dice roller

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printDice(int num)
{
    switch (num)
    {
    case 1:
        printf("-----\n");
        printf("|   |\n");
        printf("| o |\n");
        printf("|   |\n");
        printf("-----\n");
        break;
    case 2:
        printf("-----\n");
        printf("|o  |\n");
        printf("|   |\n");
        printf("|  o|\n");
        printf("-----\n");
        break;
    case 3:
        printf("-----\n");
        printf("|o  |\n");
        printf("| o |\n");
        printf("|  o|\n");
        printf("-----\n");
        break;
    case 4:
        printf("-----\n");
        printf("|o o|\n");
        printf("|   |\n");
        printf("|o o|\n");
        printf("-----\n");
        break;
    case 5:
        printf("-----\n");
        printf("|o o|\n");
        printf("| o |\n");
        printf("|o o|\n");
        printf("-----\n");
        break;
    case 6:
        printf("-----\n");
        printf("|o o|\n");
        printf("|o o|\n");
        printf("|o o|\n");
        printf("-----\n");
        break;
    default:
        printf("Invalid roll!\n");
    }
}

int main()
{
    int roll, ch;

    srand(time(NULL));

    do
    {
        roll = (rand() % 6) + 1;
        printf("\nYou rolled: %d\n", roll);
        printDice(roll);

        printf("\nRoll again? (1 = Yes, 0 = No): ");
        scanf("%d", &ch);
    } while (ch == 1);

    printf("Thanks for playing!\n");
    return 0;
}
