#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iINR = 0;
    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;
}
