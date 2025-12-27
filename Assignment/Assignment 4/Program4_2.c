//Accept number form user and display  factors in descending order

#include<stdio.h>

int FactorsReverse(int iNo)
{
    int iCnt =0;

    for(iCnt = iNo/2; iCnt>=1; iCnt--)
    {
        if(iNo % iCnt==0)
        {
         printf("%d",iCnt);
        }
    }
}

int main()

{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    FactorsReverse(iValue);

    return 0;
}