// User Input in C

#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    int age;
    printf("What's your name? ");
    // scanf("%s", &name); // Accepts user till first whitespace
    fgets(name, 25, stdin);        // It adds Enter Key also at the end
    name[strlen(name) - 1] = '\0'; // Add Carriage Return at the last index of name
    printf("How old are you? ");
    scanf("%d", &age);
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    return 0;
}