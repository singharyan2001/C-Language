/*
    Author: Aryan Singh

    example of a do while loop
*/

#include <stdio.h>

int main()
{
    char c;
    int choice, dummy;
    do
    {
        printf("\n 1. print Hello\n 2. print wizards\n 3. exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("hello\n");
            break;

            case 2:
            printf("wizards\n");
            break;

            case 3:
            printf("exit\n");
            break;

            default:
            printf("please enter valid choice:\n");
        }
        printf("do you want to enter more? enter y/n: \n");
        scanf("%d", &dummy);
        scanf("%c",&c);
    } while (c == 'y');

    return 0;
}