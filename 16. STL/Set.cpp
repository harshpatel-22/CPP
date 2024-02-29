#include<set>
#include<iostream>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    cout << "Printing set: ";
    for(int i:s){
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << "Printing set after ERASE: ";
    for(int i:s){
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not? : " <<s.count(5)<<endl;
    cout << "-5 is present or not? : " <<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    
}