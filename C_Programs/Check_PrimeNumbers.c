/*
    Author: Aryan Singh
    WAP to check if the number is prime number or not.
*/

#include <stdio.h>

int main()
{
    int num, i = 2;
    int temp = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);

    while(i <= num/2)
    {
        if(num % i == 0)
        {
            temp++;
            break;
        }
        i++;
    }
    if(temp == 0 && num != 1)
    {
        printf("%d is a prime number\n\n", num);
    }
    else
    {
        printf("%d is not a prime number\n\n", num);
    }
    return 0;
}