//accept number from user and print that number of $ and * on screen
#include <stdio.h>

void pattern (int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 0; iCnt<iNo; iCnt++)
    {
      printf(" $ *",iNo);
    }




}
int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    pattern(iValue);
    
    return 0;
}