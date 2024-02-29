#include<map>
#include<iostream>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Harsh";
    m[13] = "neel";
    m[2] = "radhe";

    m.insert({5, "bheem"});

    cout << "before ERASE: "<<endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
        
    }
   

    cout << "finding 13 --> " << m.count(13) << endl;
    cout << "finding 113 --> " << m.count(-113) << endl;

    m.erase(13);
    cout << "after ERASE: "<<endl;
    for (auto i : m)
    {
        cout << i.first <<" "<<i.second<< endl;
    }
    return 0;
}