#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        bool hasSwapped = false;
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                hasSwapped = true;
            }
        }
        if(hasSwapped == false) break;
    }
}

int main()
{
    int arr[6] = {4,2,6,8,7,3};

    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}

