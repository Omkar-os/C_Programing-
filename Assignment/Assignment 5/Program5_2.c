//Find maximum of two numbers

#include<stdio.h>

int FindMaximum(int a ,int b)
{

    if(a > b)
    {
       return a;
    }

    else
    {
       return b;
    }


}

int main()

{
    int No1 , No2 , result;
   
    printf("Enter two number :");
    scanf("%d %d",&No1,&No2);

    result = FindMaximum(No1 , No2);
    printf("Maximum is : %d\n",result);

    return 0;
}