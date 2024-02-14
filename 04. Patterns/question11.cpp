#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 11
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}