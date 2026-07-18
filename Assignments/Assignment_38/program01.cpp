#include<iostream>
using namespace std;

/* Write generic program which accepts one value and one number from user. print that value that number of times on screen

Input : M 7
Output : M M M M M M M

Input  : 11 3
Output : 11 11 11 

Input : 3.7  6
Output : 3.7 3.7 3.7 3.7 3.7 3.7

*/

template <class T>
void Display(T value, int size)
{
    int i = 0;
    for(i = 1; i <= size; i++)
    {
        cout<<value<<"\t";
    }

    cout<<endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}