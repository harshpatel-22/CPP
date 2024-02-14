#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 9
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}