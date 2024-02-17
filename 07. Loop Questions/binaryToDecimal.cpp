#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION : BINARY TO DECIMAL
    int n;
    cout << "Enter binary number: ";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n!= 0)
    {
        int digit = n % 10;
        ans = (digit * pow(2, i)) + ans;
        i++;
        n = n/10;
    }
    cout << ans;
}