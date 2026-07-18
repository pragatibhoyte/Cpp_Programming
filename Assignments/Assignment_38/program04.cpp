#include<iostream>
using namespace std;

/* Write generic program to accept N values and search last occurence of any specific value.
Input : 10  20  30  10  30  40  10  40  10
value to check frequency : 40
Output : 8

*/

template <class T>
int SerachLast(T *arr, int size, T value)
{                         
    int i = 0;
    int lastOcc = 0;
    int iCount = 0;

    for(i = 0; i < size; i++)
    {
        iCount++;
        
        if(arr[i] == value)
        {
            lastOcc = iCount;
        }
    }

    return lastOcc;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SerachLast(arr, 9, 40);
    cout<<iRet<<endl;

    return 0;
}