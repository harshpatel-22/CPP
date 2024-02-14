#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION 4
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    int i = 1;
    int num = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << num <<" ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
}