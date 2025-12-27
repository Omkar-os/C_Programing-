//To accept range from end user and return addition of all even numbers  between that range

#include<stdio.h>

int RangeDisplay(int iStart ,int iEnd)
{
   int iCnt = 0;
   int iSum = 0;

    if (iStart < 0)
    {
        iStart = -iStart;
    }
    if (iEnd < 0)
    {
        iEnd = -iEnd;
    }

   if(iStart > iEnd)
   {
    printf("Range is invalid");
    }


   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    if(iCnt % 2 ==0)
        {
         printf("%d\n",iCnt);
         iSum = iSum + iCnt;
        }

     

   return iSum;
   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting number :");
    scanf("%d",&iValue1);

    printf("Enter ending number :");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1 ,iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}

