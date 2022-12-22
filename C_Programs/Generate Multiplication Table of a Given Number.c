/* 
    Author: Aryan Singh
    WAP to Generate Multiplication Table of a Given Number

*/

#include<stdio.h>

int main()
{
    int num, i, k;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The Multiplication of %d is: \n", num);

    for(i = 1; i <= 10; i++)
    {
        k = num * i;
        printf("%d x %d = %d\n", num, i, k);
    }
    return 0;
}