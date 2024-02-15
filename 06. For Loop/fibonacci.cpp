#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // FIBONACCI SERIES
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0;
    int b = 1;

    if (n == 1)
    {
        cout << a << " ";
    }
    if (n >= 2)
    {
        cout << a << " " << b << " ";
    }

    for (int i = 1; i <= n - 2; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
}