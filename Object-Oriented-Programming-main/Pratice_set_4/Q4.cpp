/*Implement a class BankAccount with data members accountNumber,
balance. Write multiple constructors for:
• Default initialization.
• Initialization with account number only.
• Initialization with account number and balance.*/
#include<iostream>
using namespace std;
class BankAccount{
    private:
        int Acc_no;
        float balance;
    public:
        BankAccount(){
            Acc_no=1499001500001471;
            balance=24000;
        }
        BankAccount(int AN){
            Acc_no=AN;
            balance=0.00;
        }
        BankAccount(int Acc,int B){
            Acc_no=Acc;
            balance=B;
        }
        void display(){
            cout<<"Account number: "<<Acc_no<<"\nBalance : "<<balance<<endl;
        }
};
int main(){
    BankAccount B1;
    cout<<"____Default initialization____\n";
    B1.display();
    BankAccount B2(415583010806);
    cout<<"_____Initialization with account number only____\n";
    B2.display();
    BankAccount B3(4555230908,100000);
    cout<<"Initialization with account number and balance\n";
    B3.display();
}