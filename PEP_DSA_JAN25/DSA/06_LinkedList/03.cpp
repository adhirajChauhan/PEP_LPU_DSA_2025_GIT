#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int val){
        data = val;
        next = NULL;
    }

};
 
Node* removeDuplicatesFromSorted(Node* head){
    if(head == NULL) return NULL;

    Node* temp = head;

    while(temp != NULL){
        if(temp->next != NULL && temp->data == temp->next->data){
            //if dupliocate data found, change the pointer and del the temp
        }
        else{
            //not same
        }
    }
} 
int main()
{
 
}