/*
    Author: Aryan Singh
    WAP to read and display the array 02

*/

#include<stdio.h>
#define size 10

int main()
{
    int m_a[size], i;
    printf("Enter the elements of the array: \n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &m_a[i]);
    }
    for(i = 0; i < 10; i++)
    {
        printf("The value of m_a[%d] is %d\n", i, m_a[i]);
    }
}