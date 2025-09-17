#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter two numbers to check which number is larger"<<endl;
    cout<<"first number : ";
    cin>>a;
    cout<<"second number : ";
    cin>>b;
    if(a>b){
        cout<<a<<" is the bigger number";
    }
    else{
        cout<<b<<" is the larger number";
    }
    return 0;
}