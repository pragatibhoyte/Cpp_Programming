#include<iostream>
using namespace std;

class Demo
{
    public : 

        int CalculateTicketPrice(int iAge)
        {
            // Input Updater
            
            if(iAge < 0)
            {
                return -1;
            }

            if(iAge >= 0 && iAge <= 5)
            {
                return 300;
            }
            else if(iAge >= 6 && iAge <= 10)
            {
                return 500;
            }
            else if(iAge >= 11 && iAge <= 20)
            {
                return 700;
            }
            else if(iAge >= 21 && iAge <= 30)
            {
                return 900;
            }
            else if(iAge >= 31 && iAge <= 50)
            {
                return 1000;
            }
            else
            {
                return 100;
            }
        }
};


int main()
{
    int iValue = 0;
    int iRet = 0;

    Demo dobj;

    cout<<"Please enter you Age : \n";
    cin>>iValue;

    iRet = dobj.CalculateTicketPrice(iValue);

    if(iRet == -1)
    {
        cout<<"Please Enter positive age "<<endl;
    }
    else
    {
        cout<<"Your ticket price is "<<iRet<<endl;
    }
}