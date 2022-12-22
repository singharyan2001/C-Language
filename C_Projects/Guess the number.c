/*
    Author: Aryan Singh
    WAP to guess the number in the range of 0-20
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, num, y;
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand()%21;
    printf("Welcome!\nThis is a guessing game\n");
    printf("I have chosen a number between 0 and 20 which you must guess te correct number\n");

    for(i = 5; i > 0; --i)
    {
        printf("You have %d tr%s left\n", i, i == 1 ? "y":"ies");
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num == randomNumber)
        {
            printf("\nYou guessed Correct!\n");
            break;
        }
        else if(num < 0 || num > 20)
        {
            printf("Error\n");
        }
        else if(randomNumber > num)
        {
            printf("%d is less than the Random Number\n", num);
        }
        else if(randomNumber < num)
        {
            printf("%d is greater than the Random Number\n", num);
        }
        else
        {
            printf("Incorrect!, you have %d tr%s left\n", i, i == 1 ? "y":"ies");
        }
    }
    if(i == 0)
    {
        printf("\nYou have Exhausted the number of tries!\n");
        printf("The Random Number is %d\n\n", randomNumber);
    }

    return 0;
}