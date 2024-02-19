#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void printCounting(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    // Print Counting
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printCounting(n);
}