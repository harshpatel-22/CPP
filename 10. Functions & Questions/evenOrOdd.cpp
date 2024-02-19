#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }

    return 1;
}


int main()
{
    // Number is Even or Odd
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}