// Writing File in C

#include <stdio.h>
int main()
{
    FILE *pF = fopen("test.txt", "a");
    fprintf(pF, "Spongebob Squarepants");
    fprintf(pF, "\nPattrick Puff");
    fclose(pF);
    return 0;
}