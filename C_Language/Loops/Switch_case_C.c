
/*
    Author: Aryan Singh
    Switch Case example
    break is very Important!!!
    constraints: 
    i/p -> 1 or 2 or any number --> to test all cases
*/

#include <stdio.h>

int main()
{
    int variableA = 22;
    int y = 35;

    printf("Enter a case number: ");
    scanf("%d", &variableA);

    switch(variableA)
    {
        case 1:
        printf("variable A is greater than 10\n");
        break;
        case 2:
        printf("variable A is greater than 20\n");
        break;
        case 3:
        switch(y)
        {
            case 30:
            printf("Variable A is greater than 30");
            break;
        }
        default:
        printf("Variable A is Unknown\n");
        break;
    }

    return 0;
}