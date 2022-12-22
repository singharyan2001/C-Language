// Varaible, Data Types and Format Specifiers.
/*
   Author: Aryan Singh
   Here, i have experimented with different types of data types in C and also the different format specifiers in C.
   Data types used - int, float, double, char, enum amd bool.
   adjacent keywords such as short, long, unsigned are used with int, double data types.
*/


#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 18;  // int data type
    float numeric_value = 77.7777;  // float data type
    double values = 333.3333333333333333333333333;  // double data type
    char word = 'A';  // char data type
    char name[] = "Aryan";  // char data type, notice the brackets [] ? -> those are used when we use the char data type to define strings.
    
    enum month{jan, feb, mar, apr, may, june, july, aug, sep ,oct, nov, dec};  // enum data type
    enum month var = jan;  // enum data type <variable name> 
    enum month var2 = apr;


    // short, long, unsigned keywords with data types

    short int age2 = 23;
    signed int age4 = -34;    
    unsigned int age5 = 34;

    long double number = 83872.232372;

    unsigned long number2 = 737393.3736381;
    long long number3 = 3662736.636826372;


    // Octal and Hexadecimal format specifiers

    int c = 28;
    int d = 31;

    // print values

    printf("age : %d\n", age);   // we can also use %i format specifier for integer values
    printf("decimal value : %f\n", numeric_value);  // we can also use the %e format specifier for float values
    printf("decimal values using double data type: %lf\n", values); // double data type
    printf("input character : %c\n", word); // char data type
    printf("input string : %s\n", name); // char data type

    printf("enum data types var1 : %d\n", var); // enum data type, which is printing the array postion number 
    printf("enum data type var2 : %d\n", var2); // enum data type, which is printing the array postion number 

    printf("age2 : %d\n", age2); // short int data type
    printf("age4 : %hi\n", age4); // signed int(short) data type --> %hi is the format specifier
    printf("age5 : %hu\n", age5); // unsigned int(short) --> %hu is the format specifier

    printf("long double data type example number1 : %Lf\n", number); // long double data type --> %Lf is the format specifier

    printf("unsigned long number2 : %lu\n",number2); // unsigned int or unsigned long --> format specifier %lu
    printf("long long number3 : %lli\n",number3);  // unsigned long long --> format specifier %lli

    printf("hexadecimal integer format specifier i.e. 28: %x\n", c);
    printf("octal integer format specifier i.e. 31 : %o\n", d);

    return 0;
}
