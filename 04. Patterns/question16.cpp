#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 16
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}