//Accept number form user and display multiplication of factors

#include<stdio.h>

int MultiplicationFactor(int iNo)
{
    int i = 1;
    int iCnt =0;

    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo % iCnt==0)
        {
          i =i * iCnt;
        }
    }

    return i;
}

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultiplicationFactor(iValue);

    printf("%d",iRet);

    return 0;
}