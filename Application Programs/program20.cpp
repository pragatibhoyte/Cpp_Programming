#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 0)
    {
        cout<<"Invalid input\n";
        return;
    }

    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\n";
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;

    cout<<"Enter frequency : \n";
    cin>>iValue;
    
    Display(iValue);
    
    return 0;
}