/*
    Author: Aryan Singh
    Functions in C
*/

// Function without argument and with return value
// Example 1

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