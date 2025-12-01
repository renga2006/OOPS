#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int temp;
    cout<<"Enter Two number: ";
    cin>>num1>>num2;
    while(num2!=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    cout<<"\nThe Gcd is "<<num1;

}