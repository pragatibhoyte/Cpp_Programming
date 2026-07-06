// Prime number

#include<iostream>
using namespace std;

bool ChkPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        }
    }

    if(iCnt == (iNo/2)+1)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    bRet = ChkPrime(iValue);

    if(bRet == true)
    {
        cout<<"Number is prime\n";
    }
    else
    {
        cout<<"Number is not prime\n";
    }
    
    return 0;
}