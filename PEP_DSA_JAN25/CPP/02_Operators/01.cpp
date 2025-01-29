#include<iostream>
using namespace std;
 
int main()
{
    int a = 5;
    int b = 10;

    //Arithmetic operators -> + - * / % 
    // a + b;
    // a - b;
    // a * b;

    // cout << a++ << endl;
    // cout << ++a << endl;

    // cout << a++ + ++a << endl;

    // cout << ans;

    //-----------------------------------

    //Assignment operators -> = += -= *= /= %=

    // a += b;

    // cout << a << endl;

    //-----------------------------------

    //Relational operators -> == != > >= < <=

    // bool ans = a < b;
    // cout << ans;

    //-----------------------------------

    // cond1       cond2      &&     ||

    //   T           T         T     T
    //   T           F         F     T
    //   F           T         F     T
    //   F           F         F     F

    //Logical operators -> && || !
    // bool ans = (a > 10) && (b < 20);
    // cout <<  ans << endl;

    bool ans = (a > 10) || (b < 20);
    cout <<  ans << endl;


}