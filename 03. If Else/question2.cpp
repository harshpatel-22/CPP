#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // QUESTION
    char ch;
    cout << "Enter a char ";
    cin >> ch;

    if (ch>= 'a' && ch<='z')
    {
        cout << "This is lowercase";
    }
    else if (ch>= 'A' && ch<='B')
    {
        cout << "This is uppercase";
    }
    else if(ch>='0' && ch<= '9')
    {
        cout << "This is a number";
    }
}