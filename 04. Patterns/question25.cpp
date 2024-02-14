#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 25
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    int count = 1;
    while (i<=n)
    {
        int spaces = n - i;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }

        int j = 1;
        while (j<=i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}