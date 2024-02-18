#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // LEEETCODE QUESTION
    // Given an integer n, return true if it is a power of two. Otherwise, return false. An integer n is a power of two, if there exists an integer x such that n == 2x.

    int n;
    cout << "Enter value of n: ";
    cin >> n;
    if (n <= 0)
    {
        cout<<"It is not in power 2";
    }
    if ((n & (n - 1)) == 0)
    {
        cout<<"It is in power 2";
    }
    else
    {
        cout<<"It is not in power 2";
    }
    
}