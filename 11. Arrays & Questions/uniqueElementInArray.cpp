#include<iostream>
using namespace std;

int main()
{
    // QUESTION CODING NINJAS

    // You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].Now, in the given array/list, 'M' numbers are present twice and one number is present only once.You need to find and return that number which is unique in the array/list.
    // Note:Unique element is always present in the array/list according to the given condition.

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[50];

    // Taking array elements input
    cout << "Enter the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = (unique^arr[i]);
    }
    cout << unique << endl;

    return 0;
}