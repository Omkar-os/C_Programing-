#include <iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int Arr[] = {10, 20, 10, 40, 10};
    int iSize = 5;

    Replace(Arr, iSize, 10, 99);

    cout << "Array after replacement: ";
    for(int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
