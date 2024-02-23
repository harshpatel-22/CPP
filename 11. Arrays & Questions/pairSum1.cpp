#include<iostream>
using namespace std;

int main()
{
    // CDING NINJAS QUESTION
    // Problem statement
    // You are given an array/list ‘ARR’ consisting of ‘N’ distinct integers arranged in ascending order. You are also given an integer ‘TARGET’. Your task is to count all the distinct pairs in ‘ARR’ such that their sum is equal to ‘TARGET’.

    // int arr[4] = {1, 3, 5, 6};
    // int n = 4;
    // int target = 10;

    int arr[5] = {1, 3, 6 ,9, 11};
    int n = 5;
    int target = 12;


    int i =0, j=n-1,count=0;
	bool flag = 0;

	while(i<j){
		if(arr[i]+arr[j]== target){
			count++;
			flag = 1;
			i++;
			j--;
		}
		else if(target < arr[i]+arr[j]){
			j--;
		}
		else{
			i++;
		}
	}
	
	if (flag == 1) {
			cout<< count;
	}
	else{
		cout<< -1;
	}
}