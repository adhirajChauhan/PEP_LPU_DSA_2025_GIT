#include<iostream>
using namespace std;

// void reachDest(int s, int e){
//     //base case
//     if(s == e){
//         cout << "Destination reached";
//         return;
//     }

//     s++;

//     reachDest(s,e);
    
// }

void sol(int n, int p){
    //base 

    //relation
}

int fact(int n){
    //base case
    if(n==0) return 1;

    return n * fact(n-1);

}

// int fib(int n){

//     if(n==1 || n==2) return -1;
//     int a = 0, b = 1;
//     int ans;
//     for(int i = 3; i <= n; i++){
//         ans = a + b;
//         a = b;
//         b = ans;
//     }
//     return ans;
// }

int fib(int n){
    //base case
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}
 
int main()
{
//   reachDest()  
}