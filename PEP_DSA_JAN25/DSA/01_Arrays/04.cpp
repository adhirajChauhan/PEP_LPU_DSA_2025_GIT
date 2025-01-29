
//Question 1
// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Example 1:
// Input:
//  1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output:
//  1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation:
//  All the zeros are moved to the end and non-negative integers are moved to front by maintaining order


//Question 2

// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5
// Explanation:
//  The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

#include<iostream>
using namespace std;

void getElements(int arr[], int size){
    int small = INT_MAX;
    int s_small = INT_MAX;

    int large = INT_MIN, s_large = INT_MIN;

    for(int i = 0; i < size; i++){
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(int i = 0; i < size; i++){
        if(arr[i] < s_small && arr[i] != small){
            s_small = arr[i];
        }

        if(arr[i] > s_large && arr[i] != large){
            s_large = arr[i];
        }
    }

}
 
int main()
{
 
}