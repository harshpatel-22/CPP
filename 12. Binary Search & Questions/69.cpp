#include<iostream>
using namespace std;

int sqrtInt(int n){
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s<=e)
    {
        long long int midSquare = mid * mid;
        if (n == midSquare)
        {
            return mid;
        }
        if ( midSquare < n)
        {
            s = s + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol){
    double ans = tempSol;
    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j*j < n; j= j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int tempAns = sqrtInt(n);
    // cout << tempAns << endl;
    
    cout << "sqrt is:" << morePrecision(n, 3, tempAns);
    return 0;
}