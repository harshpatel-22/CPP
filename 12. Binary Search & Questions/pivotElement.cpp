#include<iostream>
using namespace std;

int pivotElementIndex(int arr[],int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        
        mid = s + (e-s) / 2;
        
    }

    return s;
}

int main()
{
    // QUESTION
    // to find the pivot element in an array

    int arr[5] = {8,-1,0,1,3};
    int n = 5;

    int ans = pivotElementIndex(arr, n);
    cout <<"Element found at index: " <<ans;
    return 0;
}