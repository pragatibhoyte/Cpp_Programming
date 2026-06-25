#include<iostream>
using namespace std;

bool ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }

        if(iSum > iNo)
        {
            break;
        }
    }

    if(iNo == iSum)
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

    cout<<"Enter a Number : \n";
    cin>>iValue;

    bRet = ChkPerfect(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Perfect number"<<endl;
    }
    else
    {
        cout<<iValue<<" is Not Perfect number"<<endl;
    }

    return 0;
}