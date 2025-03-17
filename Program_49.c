// Deleting a File in C

#include <stdio.h>
int main()
{
    if (remove("test.txt") == 0)
    {
        printf("File Removed Successfully");
    }
    else
    {
        printf("File not Found");
    }
    return 0;
}