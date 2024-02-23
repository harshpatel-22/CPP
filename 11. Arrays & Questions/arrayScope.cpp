#include<iostream>
using namespace std;

void update(int arr[],int n){

    cout << "Inside update function" << endl;

    arr[0] = 122;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going to main function"<<endl;
    cout << endl;
}



int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);
    // Printing the array
    cout << "Inside main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}