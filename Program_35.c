// Area and Perimeter of square

#include <stdio.h>
void main()
{
    float side, area, perimeter;

    printf("Enter the length of side of square: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("\nArea of square: %.2f", area);
    printf("\nPerimeter of square: %.2f", perimeter);
}