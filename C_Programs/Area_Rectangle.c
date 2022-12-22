
/*
   Author: Aryan Singh

   WAP to display the perimenter and area of a rectangle.
   condition: use "double" data type.
*/

#include <stdio.h>

int main()
{
    double length, width, perimeter, area;
    printf("Enter the Length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the Width of the rectangle: ");
    scanf("%lf", &width);

    perimeter = 2*(length + width);
    area = length * width;
    
    printf("\nThe Perimeter of the Rectangle is: %lf\n", perimeter);
    printf("\nThe area of the rectangle is: %lf\n", area);
}
