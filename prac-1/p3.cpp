#include <iostream>
using namespace std;
int main()
{
    cout << "enter 3 numbers to find the greatest number among them" << endl;
    int a, b, c;
    cout << "first number : ";
    cin >> a;
    cout << "second number : ";
    cin >> b;
    cout << "third number : ";
    cin >> c;
    if (a > b && b > c)
    {
        cout << a << " is the greatest among the three numbers" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greatest among the three numbers" << endl;
    }
    else
    {
        cout << c << " is the greatest among the three numbers" << endl;
    }
    return 0;
}