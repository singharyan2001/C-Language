/*
   Author: Aryan Singh

   WAP that calculates your weekly pay

   constraints: i/p - number of hours worked in a week
   o/p - gross pay, the taxes, and the net pay

   basic pay rate : $12.00/hr
   overtime(in excess of 40 hours) = time and a half
   Tax rate: 15% of the $300 ; 20% of the next $150 ; 25% of the rest taxes
*/
#include <stdio.h>

int main()
{
    int hours, over;  // no of hours and overtime in integer format
    double pay_rate, overtime_rate, gross_pay, net_pay; // pay rate, overtime rate, gross and net salary in double data type format
    double weekly_pay, weekly_pay_overtime; // weekly pay and weekly pay including overtime, earned by the user
    double taxes, tax1, tax2, tax3; // tax rate
    double tax_a, tax_b, tax_c;

    printf("Enter the number of hours worked in a week: "); // asking user to input the number of hours worked in a week
    scanf("%d", &hours);

    pay_rate = 12.00;  // Given pay rate
    overtime_rate = 18.00; // given overtime rate
    tax1 = 0.15; // 15% tax in the range of (0-300 dollars)
    tax2 = 0.20; // 20% tax in the range of (301 - 450 dollars) i.e next 150 dollors after 300
    tax3 = 0.25; // 25% tax above 451 dollars
    tax_a = 0.0;
    tax_b = 0.0;
    tax_c = 0.0;


    // using an if-else statement to calculate the overtime of the user.
    if(hours > 40)  //if the hours is more than 40 then this condition will execute.
    {
        over = hours - 40; // enter hours minus the alloted hours -> to get the overtime hours (ex. 45-50=5)
    }
    else   // if the number of hours is less than or equal to 40, then the user didnt overtime.
    {
        over = 0 ;  // so the number of ours overtime is = 0
    }

    weekly_pay = (pay_rate * hours);  // calculating the weekly pay of the user excluding overtime
    weekly_pay_overtime = (over*overtime_rate); // calculating the overtime pay of the user
    printf("weekly pay excluding overtime: $ %f\n", weekly_pay);
    printf("weekly pay including overtime: $%f\n", weekly_pay_overtime);

    gross_pay = weekly_pay + weekly_pay_overtime;  // Obtaining the gross pay i.e the sum of weekly pay and overtime pay

    if(gross_pay > 450)
    {
        double x,y;
        x = 450 - 150;
        y = 450 - 300;
        tax_a = (x * tax1);
        tax_b = (y * tax2);
        tax_c = gross_pay * tax3;
    }
    else
    {
        if(gross_pay <= 450 && gross_pay > 300)
        {
            double x,z;  // creating a local variable x to store the earned money after 300 dollars and less than 450 dollars
            z = 450 - 150;  // Calculating the tax for 0-300 dollars tax range.
            x = gross_pay - 300; // calculating the tax for 300-450 dollars tax range.
            tax_a = (z * tax1);
            tax_b = (x * tax2);
        }
        else
        {
            tax_a = gross_pay * tax1;
        }
    }

    taxes = tax_a + tax_b + tax_c;

    printf("earned money after tax1: $ %f\n", tax_a);  // printing the money earned after tax1 condition
    printf("earned money after tax2: $ %f\n", tax_b);  // printing the money earned after tax2 condition
    printf("earned money after tax3: $ %f\n", tax_c);  // printing the money earned after tax3 condition
    printf("Total taxes this week: $ %f\n", taxes); // total taxes this week

    net_pay = gross_pay - (tax_a + tax_b + tax_c);

    printf("The gross Pay of the user is: $ %f\n", gross_pay); // displaying the gross pay of the user
    printf("The Net pay of the user is: $ %f\n\n", net_pay); // displaying the net pay of the user

    return 0;
}