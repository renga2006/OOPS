//print number odd number using while loop
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    cout<<"Odd number from 1-50"<<endl;
    while (i<=50)
    {
        if(i%2==1){
            cout<<i<<"\t";
        }
        i++;
    }
    
}