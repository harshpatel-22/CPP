#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    
    // LEETCODE QUESTION
    // The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation

    int n;
    cout << "Enter number: ";
    cin >> n;
    int m = n;
    int mask = 0;
    // Edge case
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        m = m >> 1;
        mask = (mask << 1) | 1;
    }
    int ans = (~n) & mask;
    cout<< ans;
}