#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 27
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    int start = n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        int k = 1;
        while (k <= (2 * i - 2))
        {
            cout << "* ";
            k++;
        }

        int l = start;
        while (l >= 1)
        {
            cout << l << " ";
            l--;
        }
        start--;

        i++;
        cout << endl;
    }
}