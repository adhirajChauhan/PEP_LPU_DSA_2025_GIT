#include<iostream>
using namespace std;

//Binary search tree are special kind of trees used for fast lookup, insertion and deletion

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root==NULL) return new Node(val);

    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
int main()
{
    Node* root = NULL;

    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 7);

    inorder(root);

}