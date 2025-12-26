#include <stdio.h>
#include <stdbool.h>   // for bool, true, false

bool Check(int iNo)   // specify return-type and parameter
{
    if ((iNo % 5) == 0)     // check divisibility by 5
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }

    return 0;
}
