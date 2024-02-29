#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6--> "<<binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound--> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    cout << "Upper Bound--> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;

    int b = 5;

    cout << "max of a and b is: " << max(a, b)<<endl;
    cout << "min of a and b is: " << min(a, b)<<endl;

    swap(a, b);
    cout << "a --> " << a << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "Reversed string is: "<<s << endl;

    rotate(v.begin() ,v.begin() + 1 , v.end());
    cout << "after ROTATE: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "after SORT: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}