// Write generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int size)
{
    T sum = T();
    int i = 0;

    if(size < 1)
    {
        return T();  // default value for taken datatype
    }

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr, 5);
    cout<<iSum<<endl;

    float fSum = AddN(brr, 4);
    cout<<fSum<<endl;

    return 0;
}