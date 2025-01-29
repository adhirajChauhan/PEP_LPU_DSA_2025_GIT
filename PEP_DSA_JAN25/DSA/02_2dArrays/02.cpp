#include<iostream>
using namespace std;
 
bool isPresent(int arr[][4], int key, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == key){
                return true;
            }
        }
    }
    return false;
}

//Find the sum of all numbers present in 2d array
int sumOfArray(int arr[][4], int row, int col){
    int maximum = INT_MIN;

    int rowIndx = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col  < 4; col++){
            sum += arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIndx = row;
        }
    }

    cout << "Maximum sum is : " << maximum;
    return rowIndx;
}

void wavePrint(int arr[][4], int r, int c){

    for(int col = 0; col < 4; col++){
        if(col % 2 == 1){
            for(int row = r - 1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " "; 
            }
        }
    }
}

int main()
{
    int arr[3][4] = {1,12,3,8,5,16,7,21,11,10,1,12};

    cout << "Enter key to search : ";
    int key;
    cin >> key;
}