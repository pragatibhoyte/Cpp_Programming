#include<iostream>
using namespace std;

class NumberX
{
    public : 

        float Addition(float fNo1, float fNo2)
        {
            float fSum = 0;
            fSum = fNo1 + fNo2;
            return fSum;
        }
};


int main()
{
    float fValue1 = 0, fValue2 = 0;
    float fRet = 0;

    NumberX nobj;

    cout<<"Enter first number : \n";
    cin>>fValue1;

    cout<<"Enter second number : \n";
    cin>>fValue2;

    fRet = nobj.Addition(fValue1, fValue2);
    
    cout<<"Addition is : "<<fRet<<endl;

}