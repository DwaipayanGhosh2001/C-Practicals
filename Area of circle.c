

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float radius, perimeter, area;
    printf("Enter radius of the Circle: ");
    scanf("%f", & radius);
    perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the circle: %0.2f\n", perimeter);
    area = 3.14 * radius * radius;
    printf("Area of circle: %0.2f\n", area);
    getch();
    return 0;
}
