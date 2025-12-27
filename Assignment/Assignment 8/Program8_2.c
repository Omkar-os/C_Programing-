// Accept single digit from user and print it into word
#include <stdio.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }

    if(iNo > 9)
    {
      printf("Invalid Number\n");
      return;
    }

    switch(iNo)
    {
      case 1:
         printf("One");
         break;

         case 2:
         printf("Two");
         break;

         case 3:
         printf("Three");
         break;

         case 4:
         printf("Four");
         break;

         case 5:
         printf("Five");
         break;

         case 6:
         printf("Six");
         break;

         case 7:
         printf("Seven");
         break;

         case 8:
         printf("Eight");
         break;

         case 9:
         printf("Nine");
         break;
    }



     
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}