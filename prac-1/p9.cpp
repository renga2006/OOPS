#include<iostream>
using namespace std;
int main()
{
    int f;
    int fact=1;
    cout<<"enter a number to print its factorial : ";
    cin>>f;
    for(int i=1;i<=f;i++)
    {
         fact*=i;
    }
    cout<<"the factorial of "<<f<<" is : "<<fact<<endl;
    return 0;
}