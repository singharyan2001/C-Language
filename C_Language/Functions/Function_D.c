/*
    Author: Aryan Singh
    Functions in C
*/

// Example for Function with argument and with return value
// Example 1

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

// done