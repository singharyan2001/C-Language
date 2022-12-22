/*
    Author: Aryan Singh
    nested loop example
*/

#include<stdio.h>

int main()
{
    int count,sum;
    scanf("%d", &count);

    for(int i = 1; i <= count; ++i)
    {
        sum = 0; // Initialize sum for the inner loop

        for(int j = 1; j <= i; ++j)
        {
            sum += j; 
            printf("\n%d\t%d", i, sum);
        }
    }
    return 0;
}