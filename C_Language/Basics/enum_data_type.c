
/*
   Author: Aryan Singh
   Here, i explored the enum data type 
*/
#include <stdio.h>

int main()
{
    enum company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY = 15, MICROSOFT};
    
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;
    enum company microsoft = MICROSOFT;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);
    printf("THe value of microsoft is: %d\n", microsoft);
    return 0;
}
