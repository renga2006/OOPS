//amstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int original=num,count=0,rem;
    int sum=0;
    for(int i=num;i>0;i=i/10){
        count=count+1;
    }
    for(int i=num;i>0;i=i/10){
        rem=i%10;
        sum=sum+pow(rem,count);
    }
    if(sum==original){
        cout<<"The given number is amstrong number";
    }
    else{
        cout<<"The number is not a amstrong number ";
    }

}