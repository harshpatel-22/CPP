#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(9);
    d.push_front(90);
    d.push_back(97);

    cout << "Printing the deque: ";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_back();
    cout << "Printing the deque after POP_BACK: ";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_front();
    cout << "Printing the deque after POP_FRONT: ";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "Printing the first Index element: " << d.at(1)<<endl;

    cout << "Front Element: " << d.front() << endl;
    cout << "Back Element: " << d.back() << endl;    

    cout << "Is empty?: " << d.empty()<<endl;

    cout << "before ERASE: " <<d.size()<< endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after ERASE: " <<d.size()<< endl;

    return 0;
}