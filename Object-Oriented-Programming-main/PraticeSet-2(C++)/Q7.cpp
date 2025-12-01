//prime number using for loop 
#include<iostream>
using namespace std;
int main()
{
    int n, prime=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=0){
        prime=1;
    }
    else{
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0){
                prime=1;
                break;
            }
        }
    }
    if(prime==0){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is not a prime";
    }

}