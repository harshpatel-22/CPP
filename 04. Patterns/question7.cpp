#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 7
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int num = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
}