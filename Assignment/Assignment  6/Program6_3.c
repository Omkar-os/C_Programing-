//accept number from user and check that numbar is equal or not

#include <stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Please enter  two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Numbers are Equal");

    }

    else
    {
        printf("Numbers are not equal");
    }

    return 0;
}