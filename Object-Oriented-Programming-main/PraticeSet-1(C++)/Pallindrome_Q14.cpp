#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter three digit number:";
    cin>>num;
    int div,rev=0;
    int dup=num;
    while (num!=0)
    {
        div=num%10;
        rev=div+rev*10;
        num=num/10;
    }
    cout<<"The Reverse of the Number is: "<<rev<<endl;
    if(dup==rev)
        cout<<"The give number is pallindrome";
    else
        cout<<"The Number is Not a pallindrome";
    
}