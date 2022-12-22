/* 
   Author: Aryan Singh
   Q) WAP to create a C Program that Displays the Byte of Basic Data Types supported in C

   Sizeof operator - It is a compile time unary operator and used to compute the size of its operand.
   std bool laibrary is used.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Byte size of int data type: %zd\n",sizeof(int)); // int data type
    printf("Byte size of float data type: %zd\n",sizeof(float)); // float data type
    printf("Byte size of bool data type: %zd\n",sizeof(bool)); // bool data type
    printf("Byte size of char data type: %zd\n",sizeof(char)); // char data type
    printf("Byte size of long data type: %zd\n",sizeof(long)); // long data type
    printf("Byte size of long long data type: %zd\n",sizeof(long long)); // long long data type
    printf("Byte size of double data type: %zd\n",sizeof(double)); // double data type
    printf("Byte size of long double data type: %zd\n",sizeof(long double)); // long double data type
    printf("Byte size of short data type: %zd\n",sizeof(short));
    return 0;
}

