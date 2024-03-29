#include<iostream>
using namespace std;


void printArray(int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZeroOne(int arr[],int n){
    int i = 0, j = n - 1;

    while (i<j) 
    {
        if (arr[i]==1 && arr[j]==0)
        {
            swap(arr[i], arr[j]);
        }
        if (arr[i]==0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        } 
    }
    
}

int main()
{
    int arr[8] = {1, 1, 0, 1, 0, 0, 1, 0};

    sortZeroOne(arr, 8);
    printArray(arr, 8); 
    return 0;
}