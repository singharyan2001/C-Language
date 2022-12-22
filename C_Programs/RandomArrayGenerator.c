


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber;
    int i, a, n_a[10];    

    for(i = 0; i < 10; i++)
    {
        randomNumber = rand()%21;
        n_a[i] = randomNumber;
        printf("The array value of n_a[%d] is %d\n", i, n_a[i]);
    }
}