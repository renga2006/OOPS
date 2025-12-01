/*Create a class Fraction with numerator and denominator. Overload
constructors to:
• Initialize fraction as 0/1.
• Initialize with numerator only (denominator = 1).
• Initialize with numerator and denominator.
Also, add a member function to reduce the fraction to simplest form.*/
#include<iostream>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;
        int gcd(int a, int b) {
            while (b != 0){
                int temp = b;
                b = a % b;
                a = temp;
            }
        return a;
        }
    public:
        // Default constructor: 0/1
        Fraction() {
            numerator = 0;
            denominator = 1;
        }

        // Constructor with numerator only
        Fraction(int n) {
            numerator = n;
            denominator = 1;
        }

        // Constructor with numerator and denominator
        Fraction(int n, int d) {
            if (d == 0) {
                cout << "Error: Denominator cannot be zero. Setting to 1 by default.\n";
                denominator = 1;
            } else {
                numerator = n;
                denominator = d;
            }
        }

    // Method to reduce the fraction
        void reduce() {
            int divisor = gcd(numerator, denominator);
            numerator /= divisor;
            denominator /= divisor;
        }

    // Method to display the fraction
        void display() {
            cout << "Fraction: " << numerator << "/" << denominator << endl;
        }
};

int main() {
    Fraction f1;           // 0/1
    Fraction f2(5);        // 5/1
    Fraction f3(8, 12);    // 8/12 → should reduce to 2/3

    cout << "Before Reduction:\n";
    f1.display();
    f2.display();
    f3.display();

    f3.reduce();  // Simplify 8/12 to 2/3

    cout << "\nAfter Reduction:\n";
    f3.display();

    return 0;

};