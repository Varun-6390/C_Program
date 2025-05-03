// Color text in terminal

#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

int main()
{
    printf("%sThis text is RED!%s\n", RED, RESET);
    printf("%sThis text is GREEN!%s\n", GREEN, RESET);
    printf("%sThis text is YELLOW!%s\n", YELLOW, RESET);
    printf("%sThis text is BLUE!%s\n", BLUE, RESET);
    printf("%sThis text is MAGENTA!%s\n", MAGENTA, RESET);
    printf("%sThis text is CYAN!%s\n", CYAN, RESET);

    return 0;
}