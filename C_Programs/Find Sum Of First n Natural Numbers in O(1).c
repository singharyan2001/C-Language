/*
   Author: Aryan SIngh
   WAP to Find Sum Of First n Natural Numbers in O(1)
   method 1:
   using for loops
   method 2:
   sum = (n*n + n)/2
*/

#include<stdio.h>
/*
int main()  // Method 1: for loops
{
    int num, i;
    int k = 0;
    printf("Enter the natural number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        k += i;
    }
    printf("The sum of the first %d natural number is %d\n", num, k);
    return 0;
}'*/

int main()  // Method 2: equation
{
    int num, n, i, sum;
    printf("Enter the natural number: ");
    scanf("%d", &n);
    sum = (n*n + n)/2;
    printf("The sum is %d\n", sum);
    return 0;
}