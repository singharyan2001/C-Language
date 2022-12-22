/* 
   Author: Aryan Singh
   WAP to find the largest number in the array
   Method 01:
   using a function
   Method 2:
   without using a function, simple for loops/
*/
/*
// Method 01:
#include <stdio.h>

int MAX(int array[], int n)
{
    int max = 0;
    int k;
    for(k = 0; k < n; k++)
    {
        if(array[k] > max)
        {
            max = array[k];
        }
    }
    return max;
}

int main()
{
    int arr[] = {15, 25, 45, 12, 78, 36, 57, 93, 33, 56};
    int MaxNumber;
    MaxNumber = MAX(arr, 10);
    printf("The Largest Number in the array is: %d\n", MaxNumber);
    return 0;
}
*/

// Method 02:
#include <stdio.h>

int main()
{
    int a[10], i, max;
    printf("Give 10 values: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    max = 0;
    for(i = 0;i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Largest Number is %d\n\n", max);
}