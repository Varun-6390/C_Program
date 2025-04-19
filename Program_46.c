// Text case converter

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_upper(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

void to_lower(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

void to_title(char *str)
{
    int new_word = 1;
    for (int i = 0; str[i]; i++)
    {
        if (new_word && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            new_word = 0;
        }
        else if (str[i] == ' ')
        {
            new_word = 1;
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main()
{
    char str[100], choice;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    printf("Choose case (U=upper, L=lower, T=title): ");
    scanf("%c", &choice);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    switch (choice)
    {
    case 'U':
    case 'u':
        to_upper(str);
        break;
    case 'L':
    case 'l':
        to_lower(str);
        break;
    case 'T':
    case 't':
        to_title(str);
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    printf("Converted: %s\n", str);
    return 0;
}