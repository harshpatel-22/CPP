#include <iostream>
using namespace std;

void printArray(int a[],int size){
    // Printing the array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}


void swapAlternate(int a[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(a[i], a[i + 1]);
        }
    }

// ANOTHER APPROACH (IT TAKES MUCH TIME)
    // if (size & 1 == 0)
    // {
    //     for (int i = 0; i < size; i += 2)
    //     {
    //         swap(a[i], a[i + 1]);
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < size-1; i += 2)
    //     {
    //         swap(a[i], a[i + 1]);
    //     }
    // }

    printArray(a, size);
}


int main()
{
    // QUESTION: Swapping alternate elements

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

    cout << "Alternate Swappeed array is: ";
    swapAlternate(arr, size);
    return 0;
}