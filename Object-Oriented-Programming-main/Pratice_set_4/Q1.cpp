/*Define a class Rectangle with data members length and breadth.
Write a constructor to initialize both and a member function to calcu-
late the area.*/
#include <iostream>
using namespace std;
class Rectangle{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l,float b){
            length=l;
            breadth=b;
        }
        float area(){
            return length*breadth;
        }
};
int main(){
    Rectangle R(10,20);
    cout<<"Area Of the rectangle : "<<R.area();
}