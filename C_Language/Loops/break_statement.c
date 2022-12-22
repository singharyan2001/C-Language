/*
   Author: Aryan Singh
   break statement example
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d\n", i);
        if(i == 5)
        break;
    }
    printf("Outside loop i = %d\n", i);
}
