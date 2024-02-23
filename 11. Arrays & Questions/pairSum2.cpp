#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

    // Note:
    // Each pair should be sorted i.e the first value should be less than or equals to the second value.
    // Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the  same first value, the pair with a smaller second value should come first.

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<vector<int>> ans;

    int s = 9; // Sum Target
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());

    // Printing the vectors
    for (const auto &innerVec : ans)
    {
        for (const auto &element : innerVec)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}