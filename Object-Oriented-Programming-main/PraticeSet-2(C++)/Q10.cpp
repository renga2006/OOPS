//sum of 1=100 even number 
#include<iostream>
using namespace std;
int main(){
    cout<<"The sum of 1-100 even number is ";
    int i,sum=0;
    for(i=2;i<=100;i++)
    {
        if(i%2==0);
        {
            sum=sum+i;
        }
    }
    cout<<sum;
}