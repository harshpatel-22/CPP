#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    // LEETCODE QUESTION
    // Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
    int n = 5;
    int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
    cout<< count;
}