#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 24
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int spaces = i - 1;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }

        int j = i;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}