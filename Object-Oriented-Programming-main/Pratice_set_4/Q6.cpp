/*Design a class Book with attributes title, author, and price. Provide
constructor overloading to allow creating:
• Book with title only.
• Book with title and author.
• Book with title, author, and price.*/
#include<iostream>
using namespace std;
class Book{
    private:
        string title;
        string author;
        float price;
    public:
        Book(string name){
            title=name;
            author="NA";
        }
        Book(string name,string writter){
            title=name;
            author=writter;
            price=0;
        }
        Book(string n,string w,float p){
            title=n;
            author=w;
            price=p;
        }
        void display(){
            cout<<"Books-->\n"<<"Titile: "<<title<<"\nAuthor: "<<author<<"\nPrice: "<<price<<endl;
        }
};
int main(){
    Book b1("Young Seagul");
    cout<<"______Book with title only_____\n";
    b1.display();
    Book b2("Kids of Gods","John");
    cout<<"___Book with title and author___\n";
    b2.display();
    Book b3("Fly","william",260.00);
    cout<<"___Book with All___\n";
    b3.display();
}