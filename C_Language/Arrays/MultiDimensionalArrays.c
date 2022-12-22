/*
   Author: Aryan Singh

   Multi-Dimensional Arrays - 2-D Arrays

*/

#include<stdio.h>

int main()
{
    // 2-D Array - 4 rows, 3 columns
    int arr[4][3] = {
        {10, 20, 30}, // values for 1st row
        {5, 15, 25}, // values for 2nd row
        {3, 13, 23}, // values for 3rd row
        {1, 11, 21}  // values for 4th row
        };
    printf("%d", arr[0][2]);  // printing Value of row 1, 3rd column
}