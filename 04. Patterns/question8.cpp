#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 8
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}