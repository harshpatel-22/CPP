#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 3
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}