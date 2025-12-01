#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0,div;
    while (num!=0)
    {
        div=num%10;
        sum=sum+div;
        num=num/10;
    }
    cout<<"The sum of the digit is: "<<sum;
}