/*Write a C++ program with a class Time having data members hours,
minutes, seconds. Overload constructors to:
• Initialize all with zero.
• Initialize hours and minutes, seconds defaulted to zero.
• Initialize all three.*/
#include <iostream>
using namespace std;
class Time{
    private:
        int Hours;
        int min;
        int sec;
    public:
        Time(){
            Hours=0;
            min=0;
            sec=0;
        }
        Time(int H,int M){
            Hours=H;
            min=M;
            sec=0;
        }
        Time(int H,int M,int S){
            Hours=H;
            min=M;
            sec=S;
        }
        void display(){
            cout<<"Time\n"<<Hours<<" : "<<min<<" : "<<sec<<endl;
        }
};
int main(){
    Time T1;
    cout<<"____Initialize all with zero____\n";
    T1.display();
    Time T2(6,30);
    cout<<"___Initialize hours and minutes, seconds defaulted to zero___\n";
    T2.display();
    Time T3(8,10,35);
    cout<<"___Initialize all three___\n";
    T3.display();
    return 0;
}