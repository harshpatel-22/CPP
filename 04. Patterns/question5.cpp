#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 5
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}