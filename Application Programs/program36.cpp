#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iCnt = 0;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    for(int iCnt = 2; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            cout<<"Number is not prime\n";
            return 1;
        }
    }

    cout<<"Number is prime"<<endl;
    
    return 0;
}