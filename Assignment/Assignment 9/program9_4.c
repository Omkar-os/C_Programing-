//find odd factorial of given  number

#include<stdio.h>

int OddFactoril(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iFact = 1;
    int iCnt = 0;

    for(iCnt =1; iCnt <= iNo; iCnt+=2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactoril(iValue);

    printf("Odd Factorial is %d", iRet);

    return 0;
}
