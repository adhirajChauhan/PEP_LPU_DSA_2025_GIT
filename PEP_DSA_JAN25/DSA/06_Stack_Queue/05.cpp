#include<iostream>
#include<queue>
using namespace std;

class Queue{
    public:
    int *arr;

    int front;
    int rear;
    int size;

    Queue(){
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val){

        if(rear == size -1){
            cout <<"Queue overflow "<< endl;
            return;
        }

        rear++;
        arr[rear] = val;
        if(front == -1) front++;
    }

    void pop(){

        if(front == -1){
            cout << "Queeu is empty " << endl;
            return;
        }
        front++;
    }

};
 
int main()
{
    

    

}