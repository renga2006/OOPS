#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a Year:";
    cin>>year;
    if(year%4==0)
        cout<<year<<" is a leap year";
    else
        cout<<year<<" is a ordinary year";
}