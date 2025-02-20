#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int key;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchInBST(Node* root, int key){
    if(root == NULL) return NULL;

    if(root->data == key) return root;

    if(root->data > key){
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);

}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
Node* minValue(Node* root){
    Node* temp  = root;
    while(temp->left != NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp =  temp->right;
    }
    return temp;
}
 
int main()
{
    Node* root = new Node(4);

    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);

    root->right->right = new Node(6);

    if(searchInBST(root,15) == NULL) cout << "Key doesn't exist" << endl;

    else cout << "Key exist" << endl;
    

}