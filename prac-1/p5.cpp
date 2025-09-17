#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "elo enter the number to check if its positive,negative or zero : " << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "its a positive number";
    }
    else if (a < 0)
    {
        cout << "its a negative number";
    }
    else
    {
        cout << "it is 0";
    }
    return 0;
}