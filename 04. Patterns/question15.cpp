#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 15
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}