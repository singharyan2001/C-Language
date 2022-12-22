
/*
    Author: Aryan Singh

    WAP to print natural numbers from 10 to 20 when initial loop counter is initilized to 0.

    constraints: use While loop. 
*/

#include <stdio.h>

/*
int main()
{
    int i;
    i = 0;
    if(i = 10)
    {
        i = 10; 
    }
    else
    {
        i++;
    }

    while(i >= 10 && i <= 20)
    {
        printf("The Value of i is: %d\n", i);
        i++;
    }
}
*/
//done

int main()
{
    int i;
    i = 0;
    while(i <= 20)
    {
        if(i >= 10)
        {
            printf("Value of is: %d\n",i);
        }
        i++;
    }
}