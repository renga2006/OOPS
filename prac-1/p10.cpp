#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year to check if its leap year or not : ";
    cin>>year;
    if(year%4==0)
    {
        cout<<"it is a leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
    return 0;
}