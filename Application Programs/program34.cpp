// Input : 5
// Output : 5   4   3   2   1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        cout<<iCnt<<"\t";
    }

    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    Display(iValue);
}