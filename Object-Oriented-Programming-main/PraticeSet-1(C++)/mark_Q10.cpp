#include<iostream>
using namespace std;
int main()
{
    int Phy,chem,Math;
    cout<<"Enter your Physics Mark:";
    cin>>Phy;
    cout<<"\nEnter your Chemistry Mark:";
    cin>>chem;
    cout<<"\nEnter your Maths Mark:";
    cin>>Math;
    int cutoff;
    cutoff=(Phy+chem)/2+Math;
    cout<<"Your cutoff is "<<cutoff<<endl;
    int avg=(Phy+chem+Math)/3;
    cout<<"Your average Marks of three subject "<<avg;

}