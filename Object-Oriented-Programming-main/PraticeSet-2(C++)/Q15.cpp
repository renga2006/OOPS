//pallindrome using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a three digit number: ";
    cin>>n;
    int original=n,rev=0,div;
    for(int num=n;num>0;num=num/10){
        div=num%10;
        rev=div+rev*10;
    }
    if(rev==original)
    {
        cout<<"The given is in pallindrome"; 
    }
    else{
        cout<<"Its not the pallindrome ";
    }
}