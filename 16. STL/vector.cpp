#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;

    vector<int> a(5, 1); //5 is the size of the vector and all places initialize with 1(by default 0)
    cout << "Printing vecotr a: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    vector<int> newVector(a);//This copies all elements of a in newVector

    cout<< "Capacity--> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl;

    v.push_back(66);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    cout << "Element at 2nd index is: " << v.at(2) << endl;
    
    cout << "Front Element: " << v.front() << endl;
    cout << "Back Element: " << v.back() << endl;

    cout << "Before POP: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "After POP: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "before Clear , SIZE is: " << v.size() << endl;
    cout << "before Clear , CAPACITY is: " << v.capacity() << endl;
    v.clear();
    cout << "after Clear , SIZE is: " << v.size() << endl;
    cout << "after Clear , CAPACITY is: " << v.capacity() << endl;


    return 0;
}