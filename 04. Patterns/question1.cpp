#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 1
    int n;
    cout << "Enter a value of n ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i++;
    }
}