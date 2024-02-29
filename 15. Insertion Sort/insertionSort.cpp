#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[] , int n){
    
    for(int i =1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp && arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[14] = {3, 43, 7, 14, 28, 44, 22, 2, 13, 36, 20, 19, 46, 22};
    int n = 14;
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}