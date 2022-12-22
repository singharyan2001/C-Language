/*
   Author: Aryan Singh
   
   Loops are used to repeat similar part of a code efficiently.
   Types of loops:
   1) while loops
   2) do-while loops
   3) For loops
   
 
   1) While loop:
syntax: 
   while(condition - is true?)
   {
    //code  --> 
    condition++ or condition--;
   }
   // In While loop's, The block of code keeps executing as long as the condition is true

   2) do-while Syntax
syntax:
   do
   {
    //code;
    //code;
   }
   while(condition);

   // do while loops work very similar to while loops.
   // while checks the condition and ten executes the code.
   // do -while executes the code and then checks the condition.
   // do-while loop executes at least once.

   3) for loop
syntax:
    for(<initilize> ; <test/condition> ; <increment/decrement>)
    {
        //code
        i++/i--;
    }
    
    // The for loop in C language is used to iterate the statements or a part of the program several times.
    // It is frequently used to traverse the data structures like the array and linked list.

*/
#include<stdio.h>  

int main()
{  
    // while loop
    int l;
    l = 0;
    while(l < 10)
    {
        printf("Value of l is: %d\n", l);
        l++;
    }

    printf("\n\n");

    // do-while loop
    int z = 0;  //change this value to see the results.
    do
    {
        printf("THe value of z is: %d\n", z);
        z++;
    }
    while(z < 30);

    printf("\n\n");

    // for loop
    int x=0;        
    for(x=1;x<=10;x++)
    {
        printf("The Value of i is: %d\n",x);      
    }

    return 0;  
}
