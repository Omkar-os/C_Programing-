//To accept range from end user and display all odd numbers in between that range

#include<stdio.h>

void RangeDisplay(int iStart ,int iEnd)
{
   int iCnt = 0;

   if(iStart > iEnd)
   {
    printf("Range is invalid");

   }

   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
        if(iCnt % 2)
        {
         printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting number :");
    scanf("%d",&iValue1);

    printf("Enter ending number :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}

