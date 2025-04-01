// Check vowel and consonant

#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("Enter Alphabet to check: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (isalpha(ch))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("%c is a vowel", ch);
        }
        else
        {
            printf("%c is a consonant", ch);
        }
    }
}