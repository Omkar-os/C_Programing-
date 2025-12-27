//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions separately.
/*1.Write a program which accept one number from user and print that number of even numbers on screen.
Input :7
Output : 2 4 6 8 10 12 14
*/
#include<stdio.h>

void PrintEvenNumber(int iNo)
{
    int iCnt = 0;
    int iNum = 0;

    if(iNo <= 0)
{
     return;
}
 
   for (iCnt = 1; iCnt<iNo; iCnt++)
   {
    iNum = iCnt * 2;
    printf("%d\n",iNum);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d\n", &iValue);
    
    PrintEvenNumber(iValue);
    
    return 0;
}