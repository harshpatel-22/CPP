#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
    int x = 523;
    int ans = 0;
    int max = INT_MAX;
    int min = INT_MIN;
    while (x != 0)
    {
        int digit = x % 10;
        x = x / 10;
        if (max / 10 < ans || min / 10 > ans)
        {
            return 0;
        }
        ans = ans * 10 + digit;
    }
    cout<< ans;
}