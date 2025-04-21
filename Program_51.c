// Morse code encoder/decoder

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *morseCodes[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
    "....", "..", ".---", "-.-", ".-..", "--", "-.",
    "---", ".--.", "--.-", ".-.", "...", "-", "..-",
    "...-", ".--", "-..-", "-.--", "--..",
    "-----", ".----", "..---", "...--", "....-",
    ".....", "-....", "--...", "---..", "----."};

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void encode(char *text)
{
    printf("\nMorse Code: ");
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            printf("   ");
            continue;
        }
        char ch = toupper(text[i]);
        char *ptr = strchr(alphabet, ch);
        if (ptr)
        {
            int index = ptr - alphabet;
            printf("%s ", morseCodes[index]);
        }
    }
    printf("\n");
}

void decode(char *morse)
{
    printf("\nDecoded Text: ");
    int len = strlen(morse);
    char token[10] = "";
    int ti = 0;
    int spaceCount = 0;

    for (int i = 0; i <= len; i++)
    {
        if (morse[i] != ' ' && morse[i] != '\0')
        {
            token[ti++] = morse[i];
            token[ti] = '\0';
            spaceCount = 0;
        }
        else
        {
            spaceCount++;
            if (ti > 0)
            {

                for (int j = 0; j < 36; j++)
                {
                    if (strcmp(token, morseCodes[j]) == 0)
                    {
                        printf("%c", alphabet[j]);
                        break;
                    }
                }
                ti = 0;
                token[0] = '\0';
            }

            if (spaceCount == 3)
            {
                printf(" ");
                spaceCount = 0;
            }
        }
    }
    printf("\n");
}

int main()
{
    int choice;
    char input[1000];

    printf("Morse Code Encoder/Decoder\n");
    printf("1. Encode\n2. Decode\nChoose an option: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1)
    {
        printf("Enter text to encode: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;
        encode(input);
    }
    else if (choice == 2)
    {
        printf("Enter Morse code to decode (letters: space, words: 3 spaces):\n");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;
        decode(input);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}