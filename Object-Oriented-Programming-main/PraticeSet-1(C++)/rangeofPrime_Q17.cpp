#include <iostream>
using namespace std;

int main()
{
    int limit, i, j, prime;
    cout << "Enter a range limit: ";
    cin >> limit;

    for (i = 2; i <= limit; i++)
    {
        prime = 1; // assume i is prime

        // check divisibility
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0) // if divisible, not prime
            {
                prime = 0;
                break; // break only when divisor found
            }
        }

        if (prime == 1)
            cout << i << "\t";
    }

    return 0;
}
