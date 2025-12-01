//to find the largest number in  a digit 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number greater than 100: ";
    cin>>n;
    int div,maxdigit=0;
    do
    {
        div=n%10;
        if(div>maxdigit){
            maxdigit=div;
        }
        n=n/10;
    } while (n!=0);
    cout<<"The greatest number in a digit is "<<maxdigit;
}