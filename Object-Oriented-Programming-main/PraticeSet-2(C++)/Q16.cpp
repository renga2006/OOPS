//odd or even
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i%2==0){
            cout<<i<<" is even"<<endl;
        }
        else if (i%2==1)
        {
            cout<<i<<" is odd"<<endl;
        }
        
    }
}
