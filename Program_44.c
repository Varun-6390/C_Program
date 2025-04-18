// Word Counter

#include <stdio.h>

int main()
{
    char str[100];
    int words = 0, in_word = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] != ' ' && !in_word)
        {
            in_word = 1;
            words++;
        }
        else if (str[i] == ' ')
        {
            in_word = 0;
        }
    }

    printf("Number of words: %d\n", words);
    return 0;
}