#include <iostream>
using namespace std;

template <class T>
bool SecondMin(T *arr, int iSize)
{
   if(iSize < 2)
   {
    return-1;  // Not possible
   }

   T Min = arr[0];
   T SecMin = arr[1];

   if(Min > SecMin)
   {
    T temp = Min;
    Min = SecMin;
    SecMin = temp;
   }

   for(int iCnt = 2; iCnt < iSize; iCnt++)
   {
    if(arr[iCnt] < Min)
    {
       SecMin = Min;
       Min = arr[iCnt];
    }
    else if(arr[iCnt] < SecMin && arr [iCnt] != Min)
    {
        SecMin = arr[iCnt];
    }

   }
   return SecMin;

}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    cout<<"Second smallest element is:"
        << SecondMin(Arr,iSize);

    return 0;
}
