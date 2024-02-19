#include<iostream>
using namespace std;

int totalSetBits(int a,int b){
    int sumA = 0;
    int sumB = 0;
    while (a!=0)
    {
        if (a&1==1)
        {
            sumA++;
        }
        a = a >> 1;
    }
    while (b!=0)
    {
        if (b&1==1)
        {
            sumA++;
        }
        b = b >> 1;
    }

    return (sumA + sumB);
}

int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    
    cout << "Enter the value of b: ";
    cin >> b;

    int ans = totalSetBits(a, b);
    cout << "Total no of set bits are: " << ans;
    return 0;
}