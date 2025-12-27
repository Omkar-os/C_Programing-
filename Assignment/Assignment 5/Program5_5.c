//Largest number among three numbers

#include<stdio.h>

int FindLargestNumber(int x , int y ,int z)
{
   int max = x;

   if(y > max)
   {
     max = y;
   }

   if(z > max)
   {
     max = z;
   }

   return max;
   
}

int main()

{
    int a , b , c;
    int bRet;


    printf("enter three numbers :");
    scanf("%d %d %d ",&a, &b, &c);

    bRet = FindLargestNumber(a , b, c);
    printf("Largest number is :%d\n",bRet);

    return 0;
}