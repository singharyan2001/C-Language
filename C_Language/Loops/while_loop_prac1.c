/*
   Author: Aryan Singh

   1st program would print numbers 5 times.
   2nd program would ask the users a number infinite times, as long as its not -1; which would exit the loop.

*/

#include<stdio.h>
/*

int main()
{
    int count = 0;
    while(count<=5)
    {
        printf("%i\n",count);
        count++;
        //++count;
    }
}
*/
int main()
{
    int num = 0;
    scanf("%d",&num);
    while(num!=-1)
    {
        scanf("%d",&num);
    }
}