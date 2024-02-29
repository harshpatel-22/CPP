#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("harsh");
    s.push("hh");
    s.push("Patel");

    cout << "Top Element is: " << s.top()<<endl;

    s.pop();
    cout << "Top Element is: " << s.top()<<endl;

    cout << "SIZE of stack is: " << s.size()<<endl;

    cout << "Is Empty? : " << s.empty()<<endl;

    

    return 0;
}