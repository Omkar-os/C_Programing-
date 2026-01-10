#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    if(CheckSorted(Arr, iSize))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}
