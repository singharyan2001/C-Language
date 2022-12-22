/* 
    Author: Aryan Singh
    Initilization of  an array
*/


#include<stdio.h>

int main()
{
    int i, a[10];
    int sum = 0;
    float average = 0.0;
    printf("Enter the Array Values: \n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for(i = 0; i < 10; i++)
    {
        printf("The Value of a[%d] is: %d\n", i, a[i]);
    }

    average = (float)sum/10;
    printf("The sum is: %d\n", sum);
    printf("The average is: %f\n\n", average);

    return 0;
}