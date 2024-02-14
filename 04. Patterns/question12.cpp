#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTON 12
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    char count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}