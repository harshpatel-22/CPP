#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(odd, 5, 3);

    if (index != -1)
    {
        cout << "Key found at index: " << index << endl;
    }
    else{
        cout << "Element not exist" << endl;
    }
    return 0;
}