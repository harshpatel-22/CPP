#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // SWITCH CASE
    int ch = 'a';
    switch (ch)
    {
    case 1:
        cout << "first" << endl;
        break;
    case '2':
        cout << "second" << endl;
        break;

    default:
        cout << "It is a default" << endl;
        break;
    }
}