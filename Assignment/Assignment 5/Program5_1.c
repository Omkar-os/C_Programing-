//Check even odd

#include<stdio.h>

void CheckEvenOdd(int num)
{
    int iCnt =0;
    {
        if(num % 2 == 0)
        {
           printf("Number is even");
        }
        else
        {
            printf("Number is odd");
        }
    }
}

int main()

{
    int iValue;
   
    printf("Enter number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}