#include<iostream>
using namespace std;

void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    cout<<"Summation of factors is : "<<iSum<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter a Number : \n";
    cin>>iValue;

    SumFactors(iValue);

    return 0;
}