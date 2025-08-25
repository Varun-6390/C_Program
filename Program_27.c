// Bill calculator

#include <stdio.h>

int main()
{
    float price, total = 0;
    int i, items;
    printf("Enter number of items: ");
    scanf("%d", &items);
    for (i = 1; i <= items; i++)
    {
        printf("Enter price of %d item: ", i);
        scanf("%f", &price);
        total = total + price;
    }
    printf("Total bill: Rs.%.2f\n", total);
    return 0;

}
