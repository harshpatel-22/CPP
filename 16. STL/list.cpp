#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    list<int> n(5, 99);
    cout << "List n: ";
    for(int i:n){
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    cout << "List l: ";
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after ERASE:";
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    cout << "SIZE of a list: " << l.size() << endl;
    return 0;
}