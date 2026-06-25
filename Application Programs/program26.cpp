#include<iostream>
using namespace std;

bool CheckDivisiblitity(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter a Number to Check Divisibility : \n";
    cin>>iValue;

    bRet = CheckDivisiblitity(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Divisible by both 3 and 5\n";
    }
    else
    {
        cout<<iValue<<" is Not Divisible by both 3 and 5\n";
    }

    return 0;
}