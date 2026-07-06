// Prime number using iCount

#include<iostream>
using namespace std;

bool ChkPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(int iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    if(iCount > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
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