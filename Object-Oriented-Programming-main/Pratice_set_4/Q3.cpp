/*Create a class Complex with two data members real and imag. Over-
load constructors to:
• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts).*/
#include<iostream>
using namespace std;
class complex{
    private:
        float real;
        float imag;
    public:
        complex(){
            real=0;
            imag=0;
        }
        complex(float R){
            real=R;
            imag=0;
        }
        complex(float RE,float I){
            real=RE;
            imag=I;
        }
        void display(){
            cout<<"Complex number: "<<real;
            if(imag>=0){
                cout<<" + "<<imag<<"i"<<endl;
            }
            else{
                cout<<" - "<<imag<<"i"<<endl;
            }
        }
};
int main(){
    complex c1;
    cout<<"___Default Constructor___\n";
    c1.display();
    complex c2(7.2);
    cout<<"___one value___\n";
    c2.display();
    complex c3(8.5f,5.8f);
    cout<<"_____Two Value Parameterized_____\n";
    c3.display();


}