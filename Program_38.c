// typedef in C

#include <stdio.h>
#include <string.h>
// typedef: It is a reserved kewords used to give a nickname to existing data type
typedef struct
{
    char name[12];
    char password[15];
    int id;
} user;
int main()
{
    user user1 = {"Bro", "Bro123", 12345};
    user user2 = {"Bruh", "Bruh456", 1234343};
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d", user2.id);
    return 0;
}