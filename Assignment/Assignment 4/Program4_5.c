//Accept number form user and return difference between summation of its non factors  and factos

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt =0;
    int iSum = 0;
    int iNonSum = 0;
  

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
          iSum = iSum + iCnt;
        }
        else
        {
            iNonSum = iNonSum + iCnt;
        }
    }
    return iNonSum - iSum;
}

int main()

{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return 0;
}