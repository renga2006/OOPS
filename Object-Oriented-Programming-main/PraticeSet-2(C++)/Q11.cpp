//power of number using while loop
#include<iostream>
using namespace std;
int main()
{
        int a,b;
        cout<<"Enter a number: ";
        cin>>a;
        cout<<"Enter the power: ";
        cin>>b;
        int i=1,mul=1;
        while (i<=b)
        {
            mul=mul*a;
            i++;
        }
        cout<<a<<"^"<<b<<"="<<mul;
} 
