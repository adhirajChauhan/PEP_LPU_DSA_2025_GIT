#include<iostream>
using namespace std;
 
class MyStack{
    public:
    int *arr;
    int top;
    int size;

    MyStack(){
        arr = new int[size];
        top = -1;
    }

    void push(int val){

        if(top == size - 1){
            cout << "Stack overflow " << endl;
            return;
        }

        top++;

        arr[top] = val;
    }
};

int main()
{
 
}