// Check if a sentence is a Pangram

// (Uses all 26 letters)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1000];
    int alpha[26] = {0};
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i]; i++)
    {
        if (isalpha(str[i]))
            alpha[tolower(str[i]) - 'a'] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (!alpha[i])
        {
            printf("Not a pangram.\n");
            return 0;
        }
    }

    printf("Pangram!\n");
    return 0;
}