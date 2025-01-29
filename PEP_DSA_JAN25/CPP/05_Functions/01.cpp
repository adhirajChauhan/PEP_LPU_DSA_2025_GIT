#include<iostream>
using namespace std;
 
// void hello(string name, int age){
//     cout << "Hello my name is " << name << " and my age is : " << age << endl;
// }

// void test1(){
//     cout << "Statement1" << endl;
// }

// void test2(){
//     test1();
//     cout << "Statement2" << endl;
// }

int add(int, int);

int main()
{
   add(2,4); 
}

int add(int num1, int num2){
    int ans = num1 + num2;
    cout << ans;
    return ans;
}