//program which returns difference between even factorial and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
        iEvenFact = iEvenFact * iCnt;
       }

       else
       {
        iOddFact = iOddFact * iCnt;
       }
    }
    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
