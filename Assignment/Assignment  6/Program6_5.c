//accept total marks and obtained marks from user and calculate percentage
#include <stdio.h>

float Percentage(float iNo1, float iNo2)
{
    float fAns = 0.0f;

    fAns = (iNo2 / iNo1) * 100;

    return fAns;
    


}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0;

    printf("Please enter total marks :");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is %2f\n : ",fRet);

    return 0;
}