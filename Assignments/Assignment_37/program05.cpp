// Write generic program to accept N values from user and return smallest value.

#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int size)
{
    T min = arr[0];
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = Min(arr, 5);     // 50
    cout<<iSum<<endl;

    float fSum = Min(brr, 4);  // 10.0
    cout<<fSum<<endl;

    return 0;
}