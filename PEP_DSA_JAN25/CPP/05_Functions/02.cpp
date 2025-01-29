#include<iostream>
using namespace std;

void print(string name = "John", int age = 20){
    cout << "Hello " << name << " " << age << endl;
}
 
int main()
{
    print();
}