/*
    Author: Aryan Singh
    WAP to read and display the array
    aaray can be of 10 elements

*/

#include<stdio.h>

int main()
{
    int m_a[10], i;
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