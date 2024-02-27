#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[14] = {3, 43, 7, 14, 28, 44, 22, 2, 13, 36, 20, 19, 46, 22};
    int n = 14;
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
