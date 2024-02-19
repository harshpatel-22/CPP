#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{ // Prime or not
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Is a Prime Number";
    }
    else
    {
        cout << "Is NOT a Prime Number";
    }

    return 0;
}