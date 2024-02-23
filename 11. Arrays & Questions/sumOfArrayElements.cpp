#include<iostream>
using namespace std;

int sumOfArrayElemnts(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    // QUESTION: Sum of all elements in array

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

    cout << "Sum of all elements in an array is: " << sumOfArrayElemnts(arr, size);
    
    return 0;
}