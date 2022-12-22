/*
   Author: Aryan Singh
   WAP to input an array and display the minimum value in the array.
*/

#include <stdio.h>

int main()
{
    int a[10], i, min;
    printf("Give 10 values: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    min = 99999;
    for(i = 0;i < 10; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nMinimum is %d", min);
}