#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 20
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int spaces = i - 1;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}