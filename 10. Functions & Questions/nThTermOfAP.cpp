#include<iostream>
using namespace std;

int nThTermOfAP(int n){
    return ((3 * n) + 7);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = nThTermOfAP(n);
    cout << "n th term is: " << ans;
    return 0;
}