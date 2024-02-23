#include<iostream>
using namespace std;

int main()
{
    // QUESTION LEETCODE
    // You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

    // For example:
    // Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

    int ans = 0;
    int arr[5] = {1, 2, 3, 4, 4};
    for(int i = 0; i< 5; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i< 5; i++){
        ans = ans ^ i;
    }

    cout<< ans;

    return 0;
}