//Write a generic program which accepts one value and one number from user and print that value that number of times.
#include<iostream>
using namespace std;

template <class T>
int  SearchFirst(T *arr, int iSize,T iNo)
{
    int iCnt  = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        
            if(arr[iCnt] == iNo)
            {
               iCnt = iCnt+1;
            }
            
    }
    return iCnt;
}          

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    
    int iRet = SearchFirst(arr,9,40);

    cout<<iRet;

    return 0;
}
