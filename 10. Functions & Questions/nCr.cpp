#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int fact(int n){
    int ans = 1;
    while (n>=1)
    {
        ans = ans * n;
        n--;
    }
    return ans;
}

int nCr(int n, int r){
    int num = fact(n);
    int dem = fact(r) * fact((n - r));

    int ans = num / dem;

    return ans;
}

int main()
{
    // Function to find nCr
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    cout << "nCr is: " << nCr(n, r);
}