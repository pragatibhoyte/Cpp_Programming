#include<iostream>
using namespace std;

class Demo
{
    public : 

        void CheckEvenOdd(int iNo)
        {
            int iRemainder = 0;
            iRemainder = iNo % 2;

            if(iRemainder == 0)
            {
                cout<<iNo<<" is Even\n";
            }
            else
            {
                cout<<iNo<<" is Odd\n";
            }
        }
};


int main()
{
    int iValue = 0;

    Demo dobj;

    cout<<"Enter Number : \n";
    cin>>iValue;

    dobj.CheckEvenOdd(iValue);
}