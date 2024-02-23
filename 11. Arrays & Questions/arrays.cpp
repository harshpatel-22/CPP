#include<iostream>
using namespace std;


void printArray(int arr[],int size){
    cout << "Printing the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void printCharArray(char arr[],int size){
    cout << "Printing the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    // Arrays
    // contiguos locations storage and accessed with index

    // int a[10]; 
    // cout << a[0] <<endl;
    // cout << a <<endl;
    // cout << &a[0] <<endl;

    // int array[3] = {1, 2, 3};

    // // Initializing the array
    // int second[3] = {5, 7, 11};

    // // Accessing element
    // cout << second[2] << endl;

    // int third[13] = {1};

    // // Print the array
    // cout << "Printing the array: ";
    // for (int i = 0; i < 13; i++)
    // {
    //     cout << third[i] << " ";
    // }
    // cout << endl;

    // // Printing array with function and sizeof
    // int b[5] = {1, 2, 3, 4, 6};
    // cout << "Printing array with function: ";
    // int size = sizeof(b) / sizeof(int);
    // printArray(b, size);

    char ch[5] = {'a','b','c','d','e'};
    printCharArray(ch, 5);
    return 0;
}