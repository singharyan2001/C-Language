/* 
   Author: Aryan Singh
   Q) WAP that converts the number of minutes to days and years.
*/

#include <stdio.h>

int main()
{
    // Defining Variables
    int min;
    double min_in_year, min_in_day, years, days;

    // Asking the input from the user
    printf("Enter the minutes: ");
    scanf("%d", &min);

    // Calculation for number of minutes in a year and a day
    min_in_year = (365*24*60);
    min_in_day = (24*60);

    // Calculation for the number of years and days, from the user defined minutes
    years = min/min_in_year;
    days = min/min_in_day;

    // Printing the Values
    printf("year(s) : %f\n",years);
    printf("Day(s) : %f\n",days);

    printf("%d minutes is %f year(s)and %.2f day(s)\n------xxxxxx------\n",min,years,days); // print the result.
    return 0;
}
