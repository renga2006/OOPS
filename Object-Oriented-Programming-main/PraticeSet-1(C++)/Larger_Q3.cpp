#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    if(a>b)
        cout<<"The number "<<a<<" is greater than "<<b;
    else if(b>a)
        cout<<"The number "<<b<<" is greater than "<<a;
    else
        cout<<"Both the number are equal";
}