/*
    Author: Aryan Singh
    Functions in C
*/


// Function without argument and return value
/*
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
*/

// Function without argument and with return value
// Example 1
/*
#include<stdio.h>  
int sum();  
void main()  
{  
    int result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    result = sum();  
    printf("The sum is: %d\n",result);  
}  
int sum()  
{  
    int a,b;   
    printf("\nEnter two numbers: ");  
    scanf("%d %d",&a,&b);  
    return a+b;   
}  
*/
// Example 2: program to calculate the area of the square
/*
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
*/
// Example for Function with argument and without return value
/*
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
*/

// Example 2: Program to calculate the average of five numbers
#include<stdio.h>  
void average(int, int, int, int, int);  
void main()  
{  
    int a,b,c,d,e;   
    printf("\nGoing to calculate the average of five numbers:");  
    printf("\nEnter five numbers:");  
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);  
    average(a,b,c,d,e);  
}  
void average(int a, int b, int c, int d, int e)  
{  
    float avg;   
    avg = (a+b+c+d+e)/5;   
    printf("The average of given five numbers : %f",avg);  
} 

// Example for Function with argument and with return value
// Example 1
/*
#include <stdio.h>
int average(int, int, int, int, int);
void main()
{
    int a,b,c,d,e;
    float avg;
    printf("\nGoing to calculate the average of five numbers:");  
    printf("\nEnter five numbers:");  
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);  
    avg = average(a,b,c,d,e);
    printf("The average of given five numbers is: %f", avg);
}
int average(int a, int b, int c, int d, int e)
{
    //float avg;
    //avg = (a+b+c+d+e)/5;
    //printf("The average of given five numbers is: %f", avg);
    return (a+b+c+d+e)/5;
}
*/
