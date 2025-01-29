#include<iostream>
using namespace std;
 
int main()
{

    // switch(){
    //     case constant1 :
    //     //code
    //     break;

    //     case constant2 :
    //     //code
    //     break;

    //     case constant3 :
    //     //code
    //     break;

    //     default :
    //     //code

    // }


    //example

    float num1, num2;
    char oper;

    cout << "Enter operator : ";
    cin >> oper;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    switch(oper){
        case '+' :
        cout << num1 + num2 << endl;
        break;

        case '-' :
        cout << num1 - num2 << endl;
        break;

        case '*' :
        cout << num1 * num2 << endl;
        break;

        case '/' :
        cout << num1 / num2 << endl;
        break;

        default : 
        cout << "Error";
    }
}