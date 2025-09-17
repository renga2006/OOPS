#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter a number to find the sum of first n natural numbers : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum of first "<<n<<" natural numbers is : "<<sum<<endl;
    return 0;
}