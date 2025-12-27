#include<stdio.h>

double CirleArea(float fRadius)
{
    float PI = 3.14;

    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CirleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return 0;
}