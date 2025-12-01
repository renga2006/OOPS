//reverse order using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a three digit number to reverse: ";
    cin>>n;
    int div,rev=0;
    while (n!=0)
    {
        div=n%10;
        rev=div+rev*10;
        n=n/10;
    }
    cout<<"The reverse of the number is "<<rev;
}