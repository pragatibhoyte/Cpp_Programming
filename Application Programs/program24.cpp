#include<iostream>
using namespace std;

int main()
{
    string *sName = NULL;
    int iAge = 0;
    float fMarks = 0.0f;

    sName = new string;

    cout<<"Enter your Name : \n";
    getline(cin, *sName);

    cout<<"Enter your Age : \n";
    cin>>iAge;

    cout<<"Enter your Marks : \n";
    cin>>fMarks;

    cout<<"Your Name is : "<<*sName<<endl;
    cout<<"Your Age is : "<<iAge<<endl;
    cout<<"Your Marks is : "<<fMarks<<endl;

    delete sName;
    
    return 0;
}