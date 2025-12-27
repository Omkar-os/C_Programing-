//accept number from user and check that numbar is greater than 100 or not

#include <stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue;
    bool bRet = false;

    printf("Please enter number :");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Number is Greater");

    }

    else
    {
        printf("Number is Smaller");
    }

    return 0;
}