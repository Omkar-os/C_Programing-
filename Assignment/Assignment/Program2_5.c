//Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;

    }

    else
    {
        return false;

    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
        
    bRet = CheckEvenOdd(iValue);
        
    // Display result
    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }

    else
    {
         printf("%d is Odd Number\n",iValue);

    }
        
    return 0;
}