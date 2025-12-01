//fatorial using while loop
#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fac=1,i=1;
    while (i<=n)
    {
        fac=fac*i;
        i++;
    }
    cout<<"Fatorial of "<<n<<" = "<<fac;
    
}