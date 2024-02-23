#include<iostream>
#include <climits>
using namespace std;

int main()
{
    // QUESTION CODING NINJAS
    // Problem statement
    // You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.]]


    int a[6] = {1 ,2, 2, 2, 3, 4};
    int b[4] = {2 ,2 ,3 ,3};

    int i = 0, j = 0;
    while (i<6 && j < 4)
    {
        if (a[i]==b[j])
        {
            cout << b[j] << " ";
            b[j] = INT_MIN;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    

    return 0;
}