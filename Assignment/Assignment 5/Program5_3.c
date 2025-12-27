//Check leap year

#include<stdio.h>

void CheckLeapYear(int year)
{
   
   if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    
    {
        printf("%d is a Leap Year\n", year);
    }
    
    else
    {
        printf("%d is not a Leap Year\n", year);
    }


}

int main()

{
    int year;

    printf("enter year :");
    scanf("%d",&year);

    CheckLeapYear(year);

    return 0;
}