// String Functions in C

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Bro";
    char str2[] = "Code";
    int result;
    strupr(str1);
    printf("%s\n", str1);
    strlwr(str1);
    printf("%s\n", str1);
    strcat(str1, str2);
    printf("%s\n", str1);
    strncat(str1, str2, 1);
    printf("%s\n", str1);
    strcpy(str1, str2);
    printf("%s\n", str1);
    strncpy(str1, str2, 1);
    printf("%s", str1);
    strset(str1, '#');
    printf("%s", str1);
    strnset(str1, 'x', 2);
    printf("%s", str1);
    strrev(str1);
    printf("%s", str1);
    result = strlen(str1);
    printf("%d", result);
    result = strcmp(str1, str2);
    printf("%d", result);
    result = strncmp(str1, str2, 1);
    printf("%d", result);
    result = strcmpi(str1, str2);
    printf("%d", result);
    result = strnicmp(str1, str2, 1);
    printf("%d", result);
    return 0;
}