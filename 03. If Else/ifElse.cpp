    #include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // IF ELSE IN CPP
    //  int a, b;

    // cin >> a >> b;

    // if (a == b)
    // {
    //     cout <<  "a and b are equal "<< endl;
    // }

    // if (a>b)
    // {
    //     cout << "a is grater than b "<< endl;
    // }

    // if (a>0)
    // {
    //     cout << "a is positive" << endl;
    // }
    // else
    // {
    //     cout << "a is not positive" << endl;
    // }

    // int a = cin.get();
    // cout << "value of a is:" << a << endl;

    int a;
    cout << "Enter a number ";
    cin >> a;

    if (a == 0)
    {
        cout << "a is zero" << endl;
    }
    else if (a > 0)
    {
        cout << "a is positive" << endl;
    }
    else
    {
        cout << "a is negetive" << endl;
    }

}