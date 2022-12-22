/*
    Author: Aryan Singh
    Functions in C
*/

// Function without argument and return value

#include<stdio.h>  
void printName(); // Function Declaration
void sum();  // Function Declaration
void main()  
{
    printf("Hello ");  
    printName();  // Function call
    printf("\n");
    printf("\nGoing to calculate the sum of two numbers:");
    sum(); // Function call
}  

void printName()  // Function Definition
{  
    printf("Aryan");  
}

void sum()  // Function Definition
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("The sum is %d\n",a+b);
}