/*
    Author: Aryan Singh
    Functions in C
*/

// Example 2: program to calculate the area of the square

#include<stdio.h>  
int square();
void main()
{
    printf("Program to calculate the area of the square\n");
    float area = square();
    printf("The area of square is: %f\n", area);
}

int square()
{
    float side;
    printf("Enter the length of the sides in meters: ");
    scanf("%f", &side);
    return side*side;
}