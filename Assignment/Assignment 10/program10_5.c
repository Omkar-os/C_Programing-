#include<stdio.h>

double SquareMeter(double iNo)
{
    double meter = 0.0;
    meter = iNo * 0.0929;   // correct formula
    return meter;
}

int main()
{
    double iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%lf", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n", dRet);

    return 0;
}
