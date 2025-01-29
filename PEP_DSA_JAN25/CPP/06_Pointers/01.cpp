#include<iostream>
using namespace std;
 
int main()
{
    int a1 = 5;
    int a2 = 10;

    cout << &a1 << endl;
    // cout << &a2 << endl;

    int *ptr1 = &a1;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;

}