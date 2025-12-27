//accept numberfrom user anf if number is less tha 50 print small, graeter than 50 and less than 100 print medium , greater than 100 print large
#include <stdio.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }

     if(iNo < 50)
     {
      printf("Number is small");

     }
     else if(iNo > 50 && iNo < 100 )
     {
      printf("Number is medium");
     }

     else
     {
       printf("Number is greater than 100");
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