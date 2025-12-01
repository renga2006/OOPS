#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a number:";
    cin>>num1;
    if(num1>0)
        cout<<"The given number is positive";
    else if(num1<0)
        cout<<"The given number is negative";
    else
        cout<<"The number is Equal to Zero";
}