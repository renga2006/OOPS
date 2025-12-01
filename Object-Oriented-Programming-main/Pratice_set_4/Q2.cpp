/*Write a program to create a class Student with data members name,
age, and marks. Implement both a default constructor and a parame-
terized constructor to initialize the data.*/
#include<iostream>
using namespace std;
class student{
    private:
        string name;
        string roll_no;
        int marks;
    public:
        student(){
            name="Anbu";
            roll_no="107";
            marks=550;
        }
        student(string n,string rn,int m){     //Parameterized Constructor
            name=n;
            roll_no=rn;
            marks=m;
        }
        void display(){
            cout<<"\nName: "<<name<<"\n"<<"Roll No: "<<roll_no<<"\n"<<"12th Total Marks: "<<marks<<endl;
        }
};
int main(){
    student s1;
    student s2("Ramesh","109",535);
    s1.display();
    cout<<"_____________________";
    s2.display();
}