#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 17
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        char start = 'A' + n - i;
        while (j<=i)
        {
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}