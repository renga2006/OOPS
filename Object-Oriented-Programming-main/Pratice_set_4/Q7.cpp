/*Create a class Distance with data members feet and inches. Imple-
ment constructors for:

• Default initialization.
• Initialization using feet only.
• Initialization using feet and inches.
Also, write a function to display the distance.*/
#include<iostream>
using namespace std;
class Distance{
    private:
        float feet;
        float inches;
    public:
        Distance(){
            feet=6;
            inches=4;
        }
        Distance(float f){
            feet=f;
            inches=0;
        }
        Distance(float f,float i){
            feet=f;
            inches=i;
        }
        void display(){
            cout<<"Distance-->\n"<<feet<<"f "<<inches<<"inch"<<endl;
        }
};
int main(){
    Distance d;
    cout<<"___Default initialization.___\n";
    d.display();
    Distance d1(5.5);
    cout<<"___Initialization using feet only.___\n";
    d1.display();
    Distance d2(6.5,4);
    cout<<"___Initialization using feet and inches___\n";
    d2.display();
}