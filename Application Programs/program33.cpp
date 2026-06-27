// Input : 5
// Output : 1 3 5

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
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