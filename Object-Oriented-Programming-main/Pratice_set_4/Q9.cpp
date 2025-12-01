/*Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.*/
#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        string Id;
        int salary;
    public:
        Employee(string na,string i_d){
            name=na;
            Id=i_d;
            salary=0.0;
        }
        Employee(string n,string id,int m){     //Parameterized Constructor
            name=n;
            Id=id;
            salary=m;
        }
        void display(){
            cout<<"\nName: "<<name<<"\n"<<"Id No: "<<Id<<"\n"<<"Salary: "<<salary<<endl;
        }
};
int main(){
    Employee s1("Anbu","107");
    Employee s2("Ramesh","109",53500);
    s1.display();
    cout<<"_____________________";
    s2.display();
}