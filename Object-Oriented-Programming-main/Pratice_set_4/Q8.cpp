/*Define a class Car with members brand, model, and price. Overload
constructors to:
• Initialize brand only.
• Initialize brand and model.
• Initialize brand, model, and price.*/
#include<iostream>
using namespace std;
class Car{
    private:
        string brand;
        string Model;
        float price;
    public:
        Car(string b){
            brand=b;
            Model="NA";
        }
        Car(string b,string M){
            brand=b;
            Model=M;
            price=0;
        }
        Car(string b,string M,float p){
            brand=b;
            Model=M;
            price=p;
        }
        void display(){
            cout<<"Cars-->\b"<<"\nBrand: "<<brand<<"\nModel: "<<Model<<"\nPrice: "<<price<<endl;
        }
};
int main(){
    Car b1("Mahindra");
    cout<<"______Car with brand only_____\b";
    b1.display();
    Car b2("Skodaw","Superb");
    cout<<"___Car with brand and Model___\b";
    b2.display();
    Car b3("Toyota","Innova",2600000.00);
    cout<<"___Cars with All___\b";
    b3.display();
}