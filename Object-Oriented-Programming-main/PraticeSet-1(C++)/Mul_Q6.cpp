#include<iostream>
using namespace std;
int main()
{
    int num,mul,i;
    cout<<"Enter a number:";
    cin>>num;
    for(i=0;i<=12;i++)
    {
        mul=num*i;
        cout<<i<<" X "<<num<<" = "<<mul<<endl;
    }
}