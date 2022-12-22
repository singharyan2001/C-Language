/*
    Author: Aryan Singh
    Functions in C
*/
// Example for Function with argument and without return value

#include <stdio.h>
void sum(int, int);
void main()
{
    int a, b, result;
    printf("\nGoing to calculate the sum of two numbers: ");
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a,b);
}

void sum(int a, int b)
{
    printf("\nThe sum is %d", a+b);
}