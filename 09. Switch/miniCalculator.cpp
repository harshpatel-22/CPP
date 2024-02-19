#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // Mini Calculator
    int a, b;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation: " << endl;
    cin >> op;

    cout << "Your ans is: ";
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;

    default:
        cout << "Enter a valid operator";
        break;
    }
}