#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {   // check BOTH first
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;  // print the number if not fizz/buzz
        }
    }
    return 0;
}
