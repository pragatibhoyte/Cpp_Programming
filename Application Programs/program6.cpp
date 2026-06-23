#include<iostream>
using namespace std;

class Demo
{
    public : 

        bool CheckEvenOdd(int iNo)
        {
            int iRemainder = 0;
            iRemainder = iNo % 2;

            if(iRemainder == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};


int main()
{
    int iValue = 0;
    bool bRet = false;

    Demo dobj;

    cout<<"Enter Number : \n";
    cin>>iValue;

    bRet = dobj.CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Even\n";
    }
    else
    {
        cout<<iValue<<" is Odd\n";
    }
}