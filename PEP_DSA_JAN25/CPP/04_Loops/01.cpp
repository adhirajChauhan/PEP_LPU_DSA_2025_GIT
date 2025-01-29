#include<iostream>
using namespace std;
 
int main()
{
    //for loop

    // for(init ; termination cond ; update){

    // }

    // for(int i = 0; i < 5; i++){
    //     cout << i << " ";
    // }

    // sum of n natural numbers
    // int n;
    // int sum = 0;

    // cout << "Enter a positive number : " ;

    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // } 
    // cout << sum;


    //break
    // for(int i = 0; i < 10; i++){

    //     if(i == 5) break; //breaks out of the loop

    //     cout << i << " ";
    // }

    // for(int i = 0; i < 10; i++){

    //     if(i == 5) continue; skips the condition
    //     cout << i << " ";
    // }


    //example

    // int num;
    // int sum = 0;

    // for(int i = 1; i <= 3; i++){
    //     for(int j = 1; j <= 3;j++){
    //         if(j == 2){
    //             continue;
    //         }
    //         cout << "i = " << i << " , j " << j << endl;
    //     }
    // }


    //nested loop

    //example 1
    // for(int i = 0; i <= 3; i++){
    //     for(int j = 0; j <=3; j++){
    //         cout << i << " -> " << j << " || ";
    //     }
    //     cout << endl;
    // }

    //example 2

    int week = 3;
    int days = 7;

    for(int i = 1; i <= week; i++){
        cout << "Week : " << i << endl;

        for(int j = 1; j <= days; j++){
            if(j%2 != 0){
                continue;
            }
            cout << "    Days : " << j << endl;
        }
    }


}