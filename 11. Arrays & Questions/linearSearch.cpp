#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    // Weather 1 is present in it or not
    
    int key;
    cout << "enter the key: ";
    cin >> key;

    if (search(arr,10,key))
    {
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }
    
    return 0;
}