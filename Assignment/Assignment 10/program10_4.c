#include<stdio.h>

int KMtoMeter(int iNo)
{
  int meter = 0;

  meter = iNo *1000;

  return meter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %dn",iRet);

    return 0;
}