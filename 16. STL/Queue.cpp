#include <queue>
#include<iostream>
using namespace std;

int main()
{
    queue<string> q;

    q.push("harsh");
    q.push("hh");
    q.push("Patel");

    cout << "First element: " << q.front()<<endl;

    cout << "SIZE before POP: " << q.size() << endl;
    q.pop();
    cout << "First element after POP: " << q.front()<<endl;

    cout << "SIZE after POP: " << q.size() << endl;
    

    return 0;
}