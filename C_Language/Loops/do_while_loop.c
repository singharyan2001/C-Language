
/*
    Author: Aryan Singh

    WAP to print first n natural numbers using do-while loop.

*/

#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter Natural Number: ");
    scanf("%d", &n);
    i = 0;
    do
    {
        printf("The value of n is: %d\n", i+1);
        i++;
    } while (i < n);
    
    return 0;
}