#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;

    int nthTerm = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        int nextNum = a + b;
        nthTerm = nextNum;

        a = b;
        b = nextNum;
    }

    return nthTerm;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = fibonacci(n);
    cout << n<<"th term of a fibonacci series is: " << ans;
}