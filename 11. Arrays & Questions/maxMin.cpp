#include<iostream>
#include<climits>
using namespace std;

int getMax(int num[], int size){

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] > maxi)
        // {
        //     maxi = num[i];
        // }
        

        // Using max() function
        maxi = max(maxi, num[i]);
    }

    return maxi;
}
int getMin(int num[], int size){

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] < mini)
        // {
        //     mini = num[i];
        // }
        
        // Using min() function
        mini = min(mini, num[i]);
    }

    return mini;
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int num[50];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is:" << getMax(num, size) << endl;
    cout << "Minimum value is:" << getMin(num, size) << endl;

    return 0;
}