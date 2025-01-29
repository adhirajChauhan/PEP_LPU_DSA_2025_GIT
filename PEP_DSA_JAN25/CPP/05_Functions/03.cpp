// //Function overloading

// #include<iostream>
// using namespace std;

// void print(){
//     cout << "1" << endl;
// }

// void print(string name){
//     cout << "2" << endl;

// }

// int print(double d1){
//     return 3;
// }

// int print(double d1, int a){
//     return 4;
// }
 
// int main()
// {
//     cout << print(55.77);
// }




//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

int main() {
for(int i=1;i<=5;i++){
for(int j=1;j<=5-i;j++){
cout<<" ";

}
for(int k =1;k<=i*2-1;k++){
cout<<"*";
}
cout<<endl;

}
}