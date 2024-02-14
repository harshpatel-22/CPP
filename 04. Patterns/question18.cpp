#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 18
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        //For Spaces
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        //For Stars
        int j = 1;
        while (j<=i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}