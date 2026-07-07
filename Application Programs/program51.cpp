#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<endl;
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    DisplayDigits(iValue);
    
    return 0;
}