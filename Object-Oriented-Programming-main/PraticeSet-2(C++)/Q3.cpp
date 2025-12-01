//multiplication table using do while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=0;
    do
    {
        int Mul=i*n;
        cout<<i<<"X"<<n<<"="<<Mul<<endl;
        i++;
    } while (i<=12);
    
}