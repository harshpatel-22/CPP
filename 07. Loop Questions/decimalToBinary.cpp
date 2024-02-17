#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION : DECIMAL TO BINARY
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ((bit * pow(10, i)) + ans);
        n = n >> 1;
        cout << n << endl;
        i++;
    }
    cout << ans;
}