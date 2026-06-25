#include<iostream>
using namespace std;

void CheckDivisiblitity(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        cout<<iNo<<" is Divisible by both 3 and 5\n";
    }
    else
    {
        cout<<iNo<<" is Not Divisible by both 3 and 5\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a Number to Check Divisibility : \n";
    cin>>iValue;

    CheckDivisiblitity(iValue);

    return 0;
}