#include<iostream>
using namespace std;

/* Write generic program to accepts N values and count frequency of any specific value

Input : 10  20  30  10  30  40  10  40  10
value to check frequency : 10
Output : 4

*/

template <class T>
int Frequency(T *arr, int size, T value)
{
    int i = 0;
    int count = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);
    cout<<iRet<<endl;

    return 0;
}