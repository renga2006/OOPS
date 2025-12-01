// run upto negative number
#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout<<"ENter a number: ";
        cin>>n;
    } while (n>=0);
    cout<<"\nOoops You enter a negative number";
}